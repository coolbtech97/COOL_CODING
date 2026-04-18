// Number, string, boolean, null, undefined, symbol, bigint

// Non primitive data type
// Array, Object, function, date, regex, error

let n = 10;
let n2 = 20;
let n3 = 50;

let arr = [10, 20, 50];
console.log(arr);
console.log(typeof arr);

let arr2 = new Array(10, 20, 50);
console.log(arr2);
console.log(typeof arr2);

let arr3 = Array(10, 20, 50);
console.log(arr3);
console.log(typeof arr3);

let arr4 = [10,20,"Anand",4.7];
// Array can have multiple data types********

// Object           Key:Value pair
let obj = {
    name: "Anand",
    age: 25,
    city: "Delhi",
    isMarried: false
}
console.log(obj);
console.log(typeof obj);

console.log(obj.name);
console.log(obj.age);
console.log(obj.city);
console.log(obj.isMarried);

// function
let f1 = function() {
    console.log("Hello Coder Army");
}
f1();

let f2 = new Function('a', 'b', 'return a + b');
console.log(f2(10, 20));

let f3 = Function('a', 'b', 'return a * b');
console.log(f3(10, 20));

console.log(typeof f1); // FUNCTION


// Type Cpnversion
let balance = "1000";

let b = Number(balance);
console.log(b);
console.log(typeof b);      // type conversion from string to number

let c = String(400);
console.log(c);
console.log(typeof c);      // type conversion from number to string




let guess = false;
console.log(Number(guess));     // type conversion      0

let guess2 = true;
console.log(Number(guess2));    // type conversion      1

let acc = "100xz";
console.log(Number(acc));       // type conversion      NaN

let acc2 = "100";
console.log(Number(acc2));      // type conversion      100

let acc3 = "100.50";
console.log(Number(acc3));      // type conversion      100.5

let acc4 = "100.50abc";
console.log(Number(acc4));      // type conversion      NaN (Not a Number)

let acc5 = "100.50abc";
console.log(parseInt(acc5));    // type conversion      100

let acc6 = "100.50abc";
console.log(parseFloat(acc6));  // type conversion      100.5


let num ;
console.log(num);             // undefined
console.log(typeof num);      // undefined

let m = null;
console.log(m);               // null
console.log(typeof m);        // object (this is a known quirk in JavaScript)

