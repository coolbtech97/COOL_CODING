// Keywords are predefined words
// Also known as Reserved Words

// Note-> some keywords are here not used, Stored for the purpose to use in Future

// Dubugger
// can hold or puse the website running at a specific point

//---------------------------------------------------------

// STRICT MODE->
// Strict mode in JavaScript is a way to opt into a restricted version of the language.
// Its enforces stricter passing and error handling rules, which helps
// you to write more secure and robust code.

// old version do not use strict mode,
// new version use strict mode,

// strict mode matlab-- can use Extra KEYWORDS in this mode.

// Strict can be use in whole code,
// OR you can use it in a Specific Function
// 'use strict'  -<< TYPE THIS ONLY THERE

//---------------------------------------------------------------
// Use Without Strict
function f1(x,x){
    console.log(x,x);   // Prints 4 4
}
f1(3,4);
// description-> x takes 3, than x takes 4,
// so lastly x has 4, and prints x,x == 4,4 FINE


function f1(x,x){
    "use strict"
    console.log(x,x);   // GIVES ERROR***
}
f1(3,4);

//---------------------------------------------------------------------------------------

// STRICT MODE ( and future use )

// implements
// interface
// let
// package
// private
// protected
// public
// static

// implements, interface, package, protected
// -> These are not currently used in JS, but reserved for the future use.
// -> You cannot use them for identifier names.

// let
// -> let can be used without strict mode

// private, public, static
// -> These can be ONLY use in strict mode*********


//--------------------------------------------------------

// Even if some of the keywords are not in use today,
// you should not use these as variable names to avoid compatibility issues.

//--------------------------------------------------------

// FUTURE RESERVED Words-> borrowed from the Java Language

// abstract     int
// boolean      long                // NOT CURRENTLY
// byte         native              // used in JavaScript
// char         short
// double       synchronised
// final        throws
// float        transient
// goto         volatile