// declare the variable
// let num = 10;
// console.log(num); Referencing the variable

// Primitive Data Type

// Number, boolean, string, null, undefined, symbol, bigint

let num = 10; // number
console.log(num);
console.log(typeof num);

let str = "Anand";
console.log(str);
console.log(typeof str);

let comment = "Hello There";
console.log(comment);
console.log(typeof comment);

let isLearning = true;
console.log(isLearning);
console.log(typeof isLearning);

let emptyValue = null;
console.log(emptyValue);
console.log(typeof emptyValue); // historical JavaScript behavior: object

let notAssigned;
console.log(notAssigned);
console.log(typeof notAssigned);

let uniqueId = Symbol("id");
console.log(uniqueId);
console.log(typeof uniqueId);

let veryLargeNumber = 1234567890123456789012345678901234567890n;
console.log(veryLargeNumber);
console.log(typeof veryLargeNumber);




// Non Primitive Data Type

// Object
let student = {
	name: "Anand",
	age: 20,
	isActive: true,
};
console.log(student);
console.log(typeof student);

// Array
let marks = [78, 85, 91, 66];
console.log(marks);
console.log(typeof marks); // arrays are also objects in JavaScript

// Function
function greet(userName) {
	return "Hello, " + userName + "!";
}
console.log(greet("Anand"));
console.log(typeof greet);
