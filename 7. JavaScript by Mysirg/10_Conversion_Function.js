let a = 25;
// JUST PUT THE BASE NUMBER TO WHOM WANT TO CONVERT INTO STRING

console.log(a.toString(2));// Converts into Binary
console.log(a.toString(8));// Converts into Octal
console.log(a.toString(10));// Converts into Decimal ALready
console.log(a.toString(16));// Converts into Hexadecimal

//==--==--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--

// NOTE: if any string have only numbers,
// JavaScript will automatically convert it into Number in any OPERATION

// ex--
let x = "123";
console.log(x*2);   // it not Prints 123123
//                     IT CONVERTS IT AND THEN GIVES 246 as a number

//-----------------------------------------------------------------------------
