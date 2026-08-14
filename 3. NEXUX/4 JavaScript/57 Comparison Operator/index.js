// Comparison Operator
// Number to Number

let a1 = 1;
let a2 = 2;
console.log(a1==a2)

// Automatic Type Conversion for String of only Numbers
let n1 = 10;
let n2 = "10"

console.log(n1==n2) // true     JS automatically converts only-Numbered_String 'BY DEFAULT'


console.log(n1===n2) //false    Type Checks, Then Value



// null === undefined       // false

// null == undefined        // true

//        null with any other will give FALSE   , 
//   undefined with any other will give FALSE   , 


// Null can only be equivalent to Undefined
console.log(null==0)    //false
console.log(null<0)     //false
console.log(null>0)     //false

console.log(null<=0)    //true**        //happening Type Conversion
console.log(null>=0)    //true**        //happening Type Conversion



// Undefined can only be equivalent to Undefined
console.log(undefined==0)   //false
console.log(undefined<0)    //false
console.log(undefined>0)    //false
console.log(undefined<=0)   //false
console.log(undefined>=0)   //false


console.log(NaN==NaN)       // false
// because reason

let s1 = "Anand"
let s2 = "deepu"
console.log(Number(s1)==Number(s2))
//             NaN    ==   NaN
//                  FALSE
// Thatswhy it need to give answer False





let m1 = 123;
let m2 = "123";
let m3 = 123;

console.log(m1==m2==m3)
//           true ==m3
//             false




////// TRY OPERATORS  && || ! << >> ^