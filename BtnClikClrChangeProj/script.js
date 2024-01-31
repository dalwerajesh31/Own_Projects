

const btn = document.querySelector('.btn');

btn.addEventListener('click', () => {
    if(btn.style.background === 'darkgreen'){
        btn.style.background = 'red';
        btn.style.color = 'green';
        btn.style.transition = '2s ease';
    }else{
        btn.style.background = 'darkgreen';
        btn.style.color = 'red';
        btn.style.transition = '.5s ease';
    } 
});