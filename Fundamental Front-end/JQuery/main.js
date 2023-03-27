// const el = $("p")
// const el1 = document.getElementsByTagName("p")
// const el2 = document.querySelectorAll("p")

// const el = $("#hello")
// const el = $(".world")

// console.log(el)

// .html()
// const el = $("#text")
// el.html("<h1>Hello World</h1>")

//.attr()
// const inp = $("input")
// inp.attr("type", "checkbox")

// add & remove class
// el.addClass("red")
// el.addClass("blue")
// el.removeClass()

// css()
// inp.css({
//     border: "1px solid red",
//     marginLeft: "100px"
// })

// const el = document.getElementById("text")
// el.addEventListener("mouseenter", function() {
//     el.style.border = "1px solid red"
// })

// const el = $("#text")
// el.mouseenter(function() {
//     el.css("border", "1px solid red")
// })

// const inp = $("input")
// inp.focus(function() {
//     inp.css("border", "1px solid blue")
// })

const btnShow = $("#show")
const btnHide = $("#hide")
const btnFadeIn = $("#fadeIn")
const btnFadeOut = $("#fadeOut")
const btnToogle = $("#toogle")

const div = $("div")

btnShow.click(function() {
    div.show("slow")
})

btnHide.click(function() {
    div.hide("slow")
})

btnFadeIn.click(function() {
    div.fadeIn("slow")
})

btnFadeOut.click(function() {
    div.fadeOut("slow")
})

btnToogle.click(function() {
    div.slideToggle()
})
