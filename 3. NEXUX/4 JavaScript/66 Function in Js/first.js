// Function

function greet(){
    console.log("Hello Bhaiya0")
    console.log("Hello Bhaiya1")
    console.log("Hello Bhaiya2")
}

greet();
greet();
greet();

//-------------------------------------------------------------------------------------------------------

// Add program
//          parameters
function sum(number1,number2){      // NO Need to Write Data TYPE****************
    console.log(number1+number2)
}
// arguments
sum(3,4)
sum(10,15)

// we can also store function in a variable
const fun = function(){                    // THIS fun1() Stores in STAACK
    console.log("Hello Anand Kumar")        // This function STORE IN THE HEAP***
    console.log("Me to barhiya hu")
}

console.log(fun());
// fun1() called, Print 2 statements, and nothing returned, then show error for print

//-------------------------------------------------------------------------------------------------------

// Arrow Function

//              no need to type 'function'
const fun1= function(){
    console.log("Anand")
}
//              just write this Arrow
const fun2=         () => {
    console.log("Anand")
}


// At time of returning
const sum1 = (a,b)=>{return a+b;}

// No Need to type return************** and bracket
const sum2 = (a,b)=> a+b;



// write a function which returns its cube

const cube1= (num)=>num*num*num;

// 1 parameter also NO need to write Bracket    {Only for single parameter}
const cube2= num =>num*num*num;
//                             WOW WOW WOW WOW WOW WOW


//--------------------------------------------------------------------------------
// Write a Sum function for unknown parameter
//                                          rest operator

const sumk = function(...arr){
    // we get all numbers in the form of Array
}
sumk(1,2,4,5,4)
sumk(1,2,4)
sumk(1,2,4,8,6,4,3)

//--------------------------------------------------------------------------------
// difference between spread and rest operator
// k = [...n]           spread  USED TO COPY ARRAY with another Address
//      ...n            rest    TAKE UNKNOWN NUMBERS






const obj = {
    name:"Anand",
    roll:22,
    marks:97.8,
    balance:100000
}

// Write its name and roll ONLY
function fu(obj){
    console.log(obj.name)
    console.log(obj.roll)
}
fu(obj)

//      WE CAN DESTRUCTURE ALSO
function fuu({name,roll}){
    console.log(name)
    console.log(roll)
}
fuu(obj)




//--------------------------------------------------------------------------------------------------------------



// as we know that we can CALL** the function before declaring it

//  like this 

funm();

function funm(){
    console.log("Hi");
}


// But we cannot call those functions, when wee put scope under a variable

//funi();                   // ERROR ERROR
const funi = function(){
    console.log("Hello")
}