// Funtions can be pass as Reference,

function names(fun){
    console.log("Hello I am Anand")
    fun();
}

function greet(){
    console.log("I am call back Function")
}

names(greet);


//----------------------------------------------------------------------------------

function names(fun){
    console.log("Hello I am Anand")
    fun();
}

const greet = function(){
    console.log("I am call back Function")
}

names(greet);



//----------------------------------------------------------------------------------

function names(fun){
    console.log("Hello I am Anand")
    fun();
}

const greet = ()=>{
    console.log("I am call back Function")
}

names(greet);



//----------------------------------------------------------------------------------

function names(fun){
    console.log("Hello I am Anand")
    fun();
}

const greet = ()=>console.log("I am call back Function");

names(greet);



//----------------------------------------------------------------------------------

// fetchData      is a practical example for Call Back function
function funii(){
    console.log("I am cool");
}
setInterval(funii,5000);    // Call funii() function in every 5 seconds******

//----------------------------------------------------------------------------------

// forEach      //: It passes all the values one by one to the function

let arr = [10,20,30,40,50];

arr.forEach(function(num){
    console.log(num);
})

arr.forEach((num)=>{
    console.log(num);
})

arr.forEach((num)=>console.log(num))

arr.forEach( num =>console.log(num))    // very short style writing


// -> forEach can take upto 3 parameters to PASS
// single argument : number
// second arhument : index
// third  argument : Array      reference]], Originals arrays reference

arr.forEach((num)=>console.log(num))
arr.forEach((num,index)=>console.log(num))
arr.forEach((num,index,akk)=>{              // The third got the Array reference, so I took arr in akk
    console.log(num)
    console.log(index)
    console.log(akk)
})

// we can create function and then use in forEach
// mean, in place of arhuments, we can just write the whole function


//----------------------------------------------------------------------------------

// filter       : It passes each value one by one, and asks for true or false


// Q. Filter all the Even numbers of 'arr' to 'res'
let arr = [10,22,33,41,50];

const res = arr.filter(function(num) {return num%2==0; })

console.log(res);   // 10,22,50
//  Description--
//      10 goes to num, then If it returns TRUE, So added to res
//      22 goes to num, then If it returns TRUE, So added to res
//      33 goes to num, then If it returns FALSE, So added to res
//      41 goes to num, then If it returns FALSE, So added to res
//      50 goes to num, then If it returns TRUE, So added to res

// res = [10,22,50] //ishela he

// We can also write it in this way

let arr = [10,22,33,41,50];

const res = arr.filter(function(num) {return num%2==0; })
const res = arr.filter((num) => {return num%2==0; })
const res = arr.filter((num) => num%2==0)
const res = arr.filter(num => num%2==0)// Se how short it looks like



// Q. Take out all the students who gets passed , more than 50 marks

//creating an array of 'Obj'
const students = [
    {name:"Rohan", age:22, marks:70},
    {name:"Mohan", age:24, marks:80},
    {name:"Sohan", age:21, marks:30},
    {name:"Kohan", age:27, marks:40},
    {name:"Cohan", age:19, marks:90},
]

const result = students.filter(function(obj){return obj.marks>50;})
const result = students.filter((obj)=>{return obj.marks>50;})
const result = students.filter((obj)=> obj.marks>50)
const result = students.filter(obj=> obj.marks>50)
const result = students.filter(({marks})=> marks>50)    // We can also use DESTRUCTURE
//                                                      Only take out the Marks, instead of the FUll Object******


//----------------------------------------------------------------------------------------------------------------

// map  : It modifies every value of the array
//                                            It NOT returns anything
const arr = [1,2,3,4];
const result = arr.map((num)=>{return num*num;});
console.log(result)
//  Answer: [ 1 , 4 , 9 , 16]
// instead of returning true or false, it returns the adject value need to be there at that place

// It also can get upto 3 parameters*************
//                      num  ind  arr'sReference
const result = arr.map((num,index,ar)=>{return num*num;});
const result = arr.map(num => num*num);

//----------------------------------------------------------------------------------------------------------------

// Q. Write down all the Even Numbers
const arr = [1,2,3,4,5,6];

let ans = arr.filter(num => num%2==0)
console.log(ans)    // [ 2 , 4 , 6 ]

// Square of Even Numbers
let ans = arr.filter(num => num%2==0).map(n => n*n)
console.log(ans)    // [ 4 , 16 , 36 ]


// 1 minus of Squares of Even Numbers
let ans = arr.filter(num => num%2==0).map(n => n*n).map(nk => nk-1)
console.log(ans)    // [ 3 , 15 , 35 ]

//--------------------------------------------------------------------------------------------------------------

// Difference BEtween forEach and Map

//      forEach does not returns Anything

//      map returns the answer, and can be store in any variable

