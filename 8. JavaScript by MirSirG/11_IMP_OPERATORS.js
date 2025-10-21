//-----------------------------------------------------------------------------
//                                          SPREAD OPERATOR
// ARRAY IMPORTANTS POINTS->>>>>>

let arr = [10,20,30,40,50];

let arr2 = arr;

// Main Point- IT DOES NOT CREATED ANOTHER ARRAY,
// Instead of this, it also reference that address same as arr

// IF WE DELETE ANY NUMBER IN OTHER VARIABLE,
// THAT WILL ALSO GOT DELETED FOR ANOTHER ARRAY....

// so thats wrong,

// SOLUTION->>>             """SPREAD OPERATOR"""

let ar2 = [...arr];

let arr3 = [1,2,,4,5,...arr];
let arr4 = [...arr,3,4,,]
let arr5 = [1,2,...arr,4,,]

// It can also use in Functions=###

function add(x,y,x){
    return x+y+z;
}
let ar = [10,20,30];
// console.log(add(a[0],a[1],a[2]));
console.log(add(...ar)); // GREAT THING

// It can also be used to copy and write same OBJECT=###
let p1={
    name:'Anand',
    age:21
};
let p2={
    ...p1,              // GREAT THING
    city:'Rajoun'
};

//------------------------------------------------------------------------------------

// ?? -> this operator is some likely || OR,
// but some difference, || says '' = false
//                      || says 0 = false

// And ?? says True,

//      ?? -> Defination
//             If 1st value is null or undefined, then 2nd element will PASS...
let a = null;
let b = 'kuch vi'
let c = a??b;   // a has null, so c=b will happen
//                  Same for Undefined

//------------------------------------------------------------------------------------

// ?.
// If sometimes we try to access Unlocated Elements.
// The programs get stuck,
// If we use this ?. then that error will only says as Undefined
