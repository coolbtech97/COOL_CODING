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

// create OBJECT->>
let x={
    name:"Anand",
    age:21
}
console.log(x)   // OutPut--  {name: 'Anand, age:21 }

// create array->>
let a=[10,20,30]
console.log(a)  // OutPut--  [ 10, 20, 30 ]

//create function->>
function f1(){
    console.log('Hello');
}
console.log(f1);

//-------------------------------------------------------------------------

// Dynamic Data Type Changing->>
// let w=65;        // w contains Number
// w='anand'        // w contains string

//--------------------------------------------------------------------------

// CHECK DATA TYPES
// 