// 4 Data Types
// var
// let
// const
// d=5;

var a=5;    // Local Variable   // Dont use Var, Many Old Problems...

//  Its Life Cycle is IN THAT FuNcTiOn***



let b=10;   // Local Variable       launched after 2015

// Its Life Cycle is In That BLOCK***


const c=4;  // Local Variable       launched after 2015

//  Constant// Fixed Value ONCE ERror
// const c;   Dont Create Empty ERror

d=8         // Global Variable  always, even if created Within A function

//-------------------------------------------
a=10;   // Dynamic Type Programming Language'
a="Anand";

//------------------------------------------------------
// Hoisting->>
// It is JavaScript's behaviour of moving declarations to the top of their scope
// during the compilation phase before the code actually runs.
// Only declarations are hoisted not initializations.

// matlab - pura code ko read kar ke, pahle hi variable declare kar deta he***

//      FOR Functions-->>>>>>
//                  It Reads completed function Before.
//                                              WOW WOW WOW WOW WOW WOW
//                  I can "call" Function BEFORE ******
//                  (Only for Function Declaration)
//                  (NOTTT for Function Expression)

//---------------------------------

// VAR->>>>>>&&
// print x
// var x        
//              It Prints undefined
//                        (no value in it) [undefined for var]
// means VAR can be accessed before declaration ( as undefined )

// LET->>>>>>&&
// print y
// let y
//              ERROR**
//              It is Unavailable --                         (Cannot Access Unavailable Datas)
//                        (no value in it) [ERROR for let]**
// means LET can not be accessed before declatation ( ERROR )

//-----------------------------------------------------------------


// LET  && CONST

// let and const are hoisted, but no tinitialised, so they cannot be used
// until the line they are declared.
// They stay in temporal dead zone (TDZ).

// print (a)        ->>> ERROR ERROR
// let a=5; OR const a=5;



//-----------------------------------------------------------------------
// Function Declaration->>>>>>

f1();   // can call before WOw WOW
function f1()
{
    var s=10;
    t=11;
}
console.log(s,t);

// Function EXpression->>>>>>>
console.log(x);     // ERROR-- " Shows ->/not a function"
var x=function()        // because x was Var type Before
{                       // function assigned After that line
    var t=9;
    p=7;
}