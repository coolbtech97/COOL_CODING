// Reduce

// it creates Result

let arr = [10,20,30,40,50];

// Format---
// const result = arr.reduce( call_back_function , initialization );

// const result = arr.reduce(     ()    =>  {}   , initialization );  // It extracts 2 values
// const result = arr.reduce( (acc,curr) => {}   , initialization );      Accumulator , Extract_Value


//          Initialization: initial value of Acc
//          Accumulator   : It Stores the RETURN value, That gots return
//          Current       : Values input in function One by One


// Q. Find the sum of the Array
// const result = arr.reduce( (acc,curr) => {//********************
//     acc = acc+curr;
//     return acc;
// } , 0 );

const result = arr.reduce( (total,num) => {
    total = total+num;
    return total;
} , 0 );
//      It takes total Initial value '0'
//      Each time the function, 'num' take 1 element
//      Returns got saved in total, The initial value '0' got Changted to something else


// trying to write it in short-----

const result = arr.reduce( (total,num) => {
    total = total+num;
    return total;
} , 0 );

const result = arr.reduce( (total,num) => {
    return total+num;
} , 0 );

const result = arr.reduce( (total,num) => total+num , 0 );


//// IT CAN TAKE 4 PARAMETERS   1    2    3     4   *******************************
// const result = arr.reduce( (acc,curr,index,array) => {}   , initialization );      Accumulator , Extract_Value




// Q. Find the total number of Orange, Apple, Banana

let arr = ["apple","orange","banana","orange","banana","orange","apple","banana"]


//          ANSWER should be        Object having the 3 Keys, And values
//          acc = {
//              orange: 3
//              apple : 2
//              banana: 3
//          }

const result = arr.reduce((acc,curr)=>{
    if(arr.hasOwnProperty(curr))
        acc[curr]++;
    else
        acc[curr]=1;
},{});

// final result look like
// acc[apple]=1
// acc[orange]=1
// acc[banana]=1
// acc[orange]++
// acc[banana]++
// acc[orange]++
// acc[apple]++
// acc[banana]++

// STEPS ARE MENTIONED HERE



let obj={
    apple:10
}
                x = "apple"
// 3 ways to CALL object's element
obj.apple=1;
obj["apple"]=1;
obj[x]=1;


//---------------------------------------------------------------------------------------

// SET

// let arr = [10,20,10,30,10]
// set : unique value

const set1 = new Set()  // pass here Array


const set2 = new Set([10,20,10,30,10])  // doesnt take similar values multiple times

console.log(set2)   // Set(3) { 10, 20, 30 }


const user_id = new Set(["coolbhaiya97","coolbtech97","vikashanandbanka"])

let new_user = "aman"
console.log(user_id.has(new_user)); // true


// convert array into set
let arr = [10,30,20,10,40,50,30]
const set3 = new Set(arr);
// convert set into array
let arr2 = [...set3]
console.log(arr2)   // [10,30,20,40,50]


// Union 2 sets
let set4 = new Set([10,20,30,40,50])
let set5 = new Set([10,20,70,80])

let set6 = new Set([...set4,...set5]);  // removes all the 


// Intersection    by using filter
const result = [...set4].filter((num)=>set5.has(num));
//                arr    ''''''     If set4s number is present in the set 5, then It will return

// we can also get result as Set
const see = new Set(result)//   or write code in 1 line

// WE CAN ALSO USE 'FOR OF'

// WE CAN ALSO UYSE forEach
set4.forEach(value=>console.log(value))


//-----------------------------------------------------------------------------------

// map
// In Js, a Map is a collection of key-value pairs where both the
// keys and the values can be any data type (primitive object). Unlike regular
// Js objects, a Map maintains the order of its elements based on
// insertion and allows keys of any type(even objects, function, and
// primitive types), whereas objects only allow strings or symbols as keys.

// means, Key can be anything, Object, String , NUMBER   ....

// Also Maintains the order of insertion

// key should be unique

const map1 = new Map()
map1.set(3,90);
map1.set("Rohit",45);
map1.set(20,"Mohan");

map1.set(20,"Anand");   // UPDATED, older value remove, and new value placed

console.log(map1);


map1.delete(20);
console.log(map1.has("Rohit"))
console.log(map1.size)
map1.clear();   // clears everyhting




const map2 = new Map([      // 2nd way to CREATE MAP*****
    [4,"Rohit"],
    ["Mohan","Rohan"],
    [30,9]
]);
// concept using 2D Array


// FOR OF loop
for(let value of map2){
    console.log(value)  // [4,"Rohit"]  ["Mohan","Rohan"]
}

//      to get specific values
//      use Destructure
for(let [key,value] of map2){
    console.log(key , value);
}                               // wow wow wow wow

// Difference between 'Object' & 'Keys'
