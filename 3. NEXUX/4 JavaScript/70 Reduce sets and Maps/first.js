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

