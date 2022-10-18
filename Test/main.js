const circle1 = document.getElementById("circle1");
const circle2 = document.getElementById("circle2");
const slider2 = document.getElementById("slider-2");
const slider1 = document.getElementById("slider-1");
const slider = document.getElementById("slider");
const observer = new IntersectionObserver( element  => {
    element.forEach( entry => {
        if (entry.isIntersecting){
           document.getElementById('page2').style.opacity = 1;
        }
    })

})

observer.observe(document.querySelector('.hero-page2'));

circle2.addEventListener("click", (e) => {
    circle1.classList.add("not-active");
    circle2.classList.remove("not-active");
    slider2.style.display = "flex";
    slider1.classList.remove("slider-1");
    slider1.classList.add("slider-1-not-active");
    slider2.style.transform = "translateX(0)";

})

circle1.addEventListener("click", (e) => {
    circle1.classList.remove("not-active");
    circle2.classList.add("not-active");
    slider1.style.display = "flex";
    slider2.style.display = "none";
    slider2.style.transform = "translateX(50px)";
    slider2.classList.remove("slider-1");
    slider1.classList.add("slider-1");
    slider1.classList.remove("slider-1-not-active")
})
