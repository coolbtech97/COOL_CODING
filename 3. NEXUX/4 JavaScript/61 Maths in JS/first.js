// Number can also be created through OBJECT

let n1 = 23;                // typeof Number

let n2 = new Number(23);    // typeof Object

//NOTE:
//      Object takes memory in the Heap
//      Many properties or Functions comes along with them.

//------------------------------------------------------------------------------------
let num1 = 231;
let num2 = new Number(231);
let num3 = new Number(231);

console.log(num1==num2);    // true
console.log(num2==num3);    // false

// To compare,
//          Type must be same
//          Then check values

//      num1 is Number type, and num2 is Object,
//      so num2 gets converted into Number,
//      Then TYPE same, its TRUE;;

//      num2 Object's ADDRESS & num3 Object's ADDRESS
//      are not same, its FALSE;;

//------------------------------------------------------------------------------------
// Many Properties
let num = 231.68;
console.log(num.toFixed(1));    // after point, 1 digit LIMITED


console.log(num.toPrecision(4));// Total Number of Digits, LIMITED
// num = 231
console.log(num.toPrecision(6))     // 231.680
console.log(num.toPrecision(5))     // 231.68
console.log(num.toPrecision(4))     // 231.7
console.log(num.toPrecision(3))     // 232
console.log(num.toPrecision(2))     // 2.3e+2   ==  2.3 * 10^2
console.log(num.toPrecision(1))     // 2e+2     ==  2   * 10^2
//console.log(num.toPrecision(0))     //ERROR
//cannot be 0


console.log(num.toString());
// Its got converted into String;;;; WOW WOW WOW WOW


//------------------------------------------------------------------------------------
// Math


// let nami = "Anand"
// console.log(`My name is ${name}`)


console.log(Math.E)
console.log(Math.LN10)
console.log(Math.LOG10E)

console.log(Math.random())  // 0.5795740567807555
//                            random number each time
//                              0 <= Value <= 1

//------------------------------------------------------------------------------------
// Floor and cell

// let num5 = 23.5
console.log(Math.floor(23.5));  //23
console.log(Math.ceil(23.5));   //24


//------------------------------------------------------------------------------------
// Random number between 1 to 10

console.log(Math.floor(Math.random()*10))


// Random number between 11 to 20
console.log(Math.floor(Math.random()*10)+11)
// 0-9 +11


let min = 40
let max = 50
// min 40, max 50
console.log(Math.floor(Math.random()*(max-min+1)+min))


// 0-10
console.log(Math.floor(Math.random()*11))

// 1-11
console.log(Math.floor(Math.random()*11+1))

// 2-12
console.log(Math.floor(Math.random()*11+2))

