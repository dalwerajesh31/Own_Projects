using DemoCurdWithMVC.Data;
using DemoCurdWithMVC.Models;
using DemoCurdWithMVC.Models.Domains;
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;

namespace DemoCurdWithMVC.Controllers
{
    public class EmployeesController : Controller
    {
        private readonly MVCDemoContext mvcDemoContext;

        public EmployeesController(MVCDemoContext mvcDemoContext)
        {
            this.mvcDemoContext = mvcDemoContext;
        }

        [HttpGet]
        public async Task<IActionResult> Index()
        {
            var employees =  await mvcDemoContext.Employees.ToListAsync();
            return View(employees);
        }

        [HttpGet]
        public IActionResult Add()
        {
            return View();
        }

        [HttpPost]
        public async Task<IActionResult> Add(AddEmployeeViewModel addEmployeeRequest)
        {
            var employee = new Employee()
            {
                Id = Guid.NewGuid(),
                Name = addEmployeeRequest.Name,
                Email = addEmployeeRequest.Email,
                Salary = addEmployeeRequest.Salary,
                Department = addEmployeeRequest.Department,
                DateOfBirth = addEmployeeRequest.DateOfBirth
            };

            await mvcDemoContext.Employees.AddAsync(employee);
            await mvcDemoContext.SaveChangesAsync();
            return RedirectToAction("Index");
        }

        [HttpGet]
        public async Task<IActionResult> View(Guid id) 
        {
            var employee = await mvcDemoContext.Employees.FirstOrDefaultAsync(x => x.Id == id);

            if(employee != null) { 
            var viewModel = new UpdateEmployeeViewModel()
            {
                Id = employee.Id,
                Name = employee.Name,
                Email = employee.Email,
                Salary = employee.Salary,
                Department = employee.Department,
                DateOfBirth = employee.DateOfBirth
            };
                return await Task.Run(() => View("View",viewModel));
            }
            return RedirectToAction("Index");
        }

        [HttpPost]

        public async Task<IActionResult> View(UpdateEmployeeViewModel viewModel)
        {
            var employee = await mvcDemoContext.Employees.FindAsync(viewModel.Id);

            if(employee != null)
            {
                employee.Name = viewModel.Name;
                employee.Email = viewModel.Email;
                employee.Salary = viewModel.Salary;
                employee.Department = viewModel.Department;
                employee.DateOfBirth = viewModel.DateOfBirth;

                await mvcDemoContext.SaveChangesAsync();

                return RedirectToAction("Index");
            }
            return RedirectToAction("Index");
        }

        [HttpPost]

        public async Task<IActionResult> Delete(UpdateEmployeeViewModel viewModel)
        {
            var employee = await mvcDemoContext.Employees.FindAsync(viewModel.Id);

            if(employee != null)
            {
                mvcDemoContext.Employees.Remove(employee);
                await mvcDemoContext.SaveChangesAsync();

                return RedirectToAction("Index");
            }
            return RedirectToAction("Index");
        }
    }
}
