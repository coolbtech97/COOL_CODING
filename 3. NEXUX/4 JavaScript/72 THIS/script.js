console.log("Anand Kumar")  // global scope part
let b = 20                  // global scope part

function name(){            // global scope part
    console.log("name")     // NOT global scope part
}

console.log(this==window)   // TRUE , at global scope, This points to the Window

var c = 10;

console.log(this.c)         // 10



console.log(this)
//  In Browser , output : Window {window: Window, self: Window, document: document, name: '', location: Location, …}
//  In Node Js , output : {}

const obb = {
    name:"Anand",
    age:20,
    greet: function(){
        console.log(this)       // obj
        console.log(this.name)  // Anand
    }
}
obb.greet();
// Within a Object, 'this' points to that particular object

this.obb.greet();   // In browser, this -> window
// In Node Js, this -> {}       nothing
window.obb.greet(); // so this will only work with browser





// Importance of 'this'

// other like c++ language, in object, we can use member variabes.
// in js, use this.member

//ex--
let obj = {
    name:"Anand",
    age:21,
    greet: function(){
        console.log(name);          // WRONG: without this
    }
}

obj.greet();

let obj = {
    name:"Anand",
    age:21,
    greet: function(){
        console.log(this.name);     // WOW WOW WOW WOW
    }
}

obj.greet();



//----------------------------------------------------------------------------------
// NOTE, Arrow Function does not have 'this' function

// Instead, they inherit this frrom the surrounding (lexical) scope.
// ishlea ye Global Scope ko hi point krta hai
let obj = {
    name:"Anand",
    age:21,
    greet: ()=>console.log(this)            // POINTS TO THE Window***
}

obj.greet();

// In one word, If a Object has Arrow Function,
// then 'this' points to the outer side of the Object

let obj = {
    name:"Anand",
    age:21,
    greet: function(){                      // POINTS TO THE Object***
        console.log(this)
    }
}

obj.greet();

let obj = {
    name:"Anand",
    age:21,
    greet: function(){                     //this arrow function
        let ab = ()=>console.log(this)      // POINTS TO THE Object***      wow wow
    }
}

obj.greet();

// hermes ai agent

// how to apply job in the linkedin

// ansp national scholarship portal 


// "use strict" : then we cannot call function before declaring, very strict


//-------------------------------------------------------------------------------------------

// Inside a Constructor or CLass
// In constructors and classes, this refers to the instance of the object being created.

class Person {
    constructor(name,age){
        this.name = name;
        this.age = age;
    }
}

let a = new Person("Anand",22);
console.log(a)