// DATA TYPE && DYNAMIC TYPING

// Total 8 Types->>
// 7 Primitives
// 1 non-primitives

//Primitive->>>>>
// 1. String     "MySirG"
// 2. Number     35,4.2
// 3. Boolean    true,false
// 4. Null       null           var y = null (also put undefined by myself/)
// 5. Undefined  undefined      var x = undefined (default-+ for VAR before declaration)
// 6. Symbol     Symbol('id)
// 7. BigInt     125n           large_numbers > 2^53 -1

// Non-Primitive->>>>
// 8. Object     object,Array,Function

//      Object -> {name:"Anand",age:44}     Key-Value Pairs
//      Array  -> [10,20,30]                Ordered list of values
//      Function-> function(){              Reusable Code
//                  }

//   Array and Functions are technically objects in JavaScript
//-------------------------------------------------------------------------

// create OBJECT->>***
let x={
    name:"Anand",
    age:21
}
console.log(x)                  // OutPut--  {name: 'Anand, age:21 }
console.log(x.name,x.age)       // OutPut--  Anand 21
console.log(x['name'],x['age']) // OutPut--  Anand 21

// create array->>
let a=[10,20,30]
console.log(a)  // OutPut--  [ 10, 20, 30 ]

//create function->>
function f1(){
    console.log('Hello');
}
console.log(f1);    // output-> f1 is a function
console.log(f1());  // output-> runs the function and Prints undefined""**"

//-------------------------------------------------------------------------

// Dynamic Data Type Changing->>
// let w=65;        // w contains Number
// w='anand'        // w contains string

//--------------------------------------------------------------------------

// CHECK DATA TYPES
// console.log(typeof(b));

//------------------------------------------------------------------------

// DOUBT-->-->-->-->
// Why type of null'' is an Object?
// -- Its a bug in the langauge that has been there since the beginning,
// -- and it's kept for backward compatibility (old applications using those codes could give error)
// -- so thatswhy this error hasn't solved

// In JavaScript's early days (1995), values were tagged internally using type tags (binary representations).
// These tags helped the engine identify what type of value was.
// For example, the tag objects was 000 And guess what? The value for null was also 0000000
// So when typeof checked the internal representation of null, it saw the 000 tag and returned Object.

//-------------------------------------------------------------------------------------------

// ARRAY-->-->-->-->
// try to print typeof(obj)     // Prints-- Object
// try to print typeof(Arr)     // Prints-- Object
//
// How to check the arr is Array Or Not
// ans-> console.log(Array.isArray(arr));       // Prints true or false

// How to check the arr SIZE
// ans-> console.log(arr.length);               // Prints the size of the array

// NOTE: ARRAY IS THE SPECIFIC CASE OF OBJECT
//    where, lenght is property
//    and other are functions

//--------------------------------------------------------------------------------------------

// FUNCTION-->-->-->-->
// try to print typeof(obj)     // Prints-- Object
// try to print typeof(Fun)     // Prints-- Object
//
// How to check Fun is Function or Not
// and-> console.log(typeof Fun);               // Prints Function

// ex--
function f1(){
    console.log("Anand");
}
f1.x=10;
console.log(f1.x);// or f1['x']     // Can be Access it

//-------------------------------------------------------------------------------
// check f1 is Function??
console.log(f1 instanceof Function);    // Prints true
// check f1 is Object??
console.log(f1 instanceof Object);      // Prints true
// check f1 is Array??
console.log(f1 instanceof Array);       // Prints false

//------------------------------------------------------------------------------

// A UNIQUE EXAMPLE --->>/

function counter(){
    counter.count++;
}
counter.count=0;

counter();
counter();
counter();

    // simple Printing
    console.log(counter.count); // Prints 3

    // using Function Expression
    counter.showcount=function(){
        console.log(counter.count);
    }
    counter.showcount();