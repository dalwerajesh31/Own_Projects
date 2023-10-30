using DemoCurdWithMVC.Models.Domains;
using Microsoft.EntityFrameworkCore;

namespace DemoCurdWithMVC.Data
{
    public class MVCDemoContext : DbContext
    {
        public MVCDemoContext(DbContextOptions options) : base(options)
        {
        }

        public DbSet<Employee> Employees { get; set; }
    }
}
