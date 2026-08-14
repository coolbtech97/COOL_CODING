// Array

// -> It is mutuable
// -> It can hold multiple types of data

let arr = [10,6.9,'Anand',97]
console.log(arr)

//length    IT IS NOT A METHOD
console.log(arr.length)

//indexing OK OK
console.log(arr[0])


// NOTE: if copying two arrays, They are actually SAME
const arr1 = [10,20,30,40]
const arr2 = arr1
arr1[0] = 50
console.log(arr2[0])    // 50
// BECAUSE It stores Address As A reference


// TO create another clone
const arr3 = structuredClone(arr1)
//or
const arr4 = [...arr1]



// push         Adds element to the last from the array
arr4.push(50);
arr4.push(60);

// pop          Removes the last element from the array
arr4.pop();
arr4.pop();


// unshift      Add element at START***
arr.unshift(1);         // 1 10 20 30 40
arr.unshift(2);         // 2  1 10 20 30 40
arr.unshift(3);         // 3  2  1 10 20 30 40

// shift        Removes the START element from the array
arr.shift();
arr.shift();
arr.shift();


// delete       Deletes the value, BUT SPACE REMAINS Reserved no no no no
delete arr[0];          // <empty space> 2 1 10 20 30 40
//bad thing, Creates WHOLE, and reserved space






// slice
console.log(arr.slice(2,4))     // arr[2],arr[3]    4th index NOT included
//                      IT DOES NOT CHANGE THE ORIGINAL ARRAY

//splice
console.log(arr.splice(2,100))    // arr[2],arr[3] ... arr[4] not available 
//                                                  Starting index 2
//                                                  Total 100 values, AVAILABLE ONLY 2
//                      IT CHANGES THE ORIGINAL ARRAY*********
//  it cuts that specific Array,
//  and lefts there only the Remaining Elements of the Array

// splice(starting_index,total_elements,add value)

// SPLICE is also used to delete some elements which is at the betweenof an array

let ax = [10,20,30,40,50,60,70,80]

ax.splice(3,2);
console.log(ax) // 10,20,30,60,70,80    Removed the splied elements from the real array



let am = [10,20,30,40,50,60,70,80]

am.splice(3,2,97);//        **  it cutted and left 97 element there
console.log(am) // 10,20,30,97,60,70,80    Removed the splied elements from the real array
//                          **


// Only insert value from 5th index
am.splice(5,0);


// Insert multiple values at 5th index, with 0 deletion
am.splice(5,0,10,20,30,40);


// toString()
console.log(am.toString())  // "10,20,30,97,60,10,20,30,40,70,80"


// join
console.log(am.join(","));
// JOIN lets me choose to JOIN with respect to , * / -  " " or any SYMBOL

// SO JOIN GIVES MW THE FLEXIBILITY TO LET JOIN ON THE BASIS OF WHICH SYMBOL




// Concadination
let ar1 = [2,3,4,5];
let ar2 = [9,10,22,30];

let ar3 = ar1.concat(ar2);      // IT Returns the join
//                               NOT CHANGES THE ORIGINAL ARRAY

// multiple conca
let ar4 = ar1.concat(ar2,ar3);  // We can enter many arrays as i want




// 2D Array
let arrr = [[1,2,3],[4,5,6],[7,8,9]]

// Convert 2D array into 1D Array
// using FLAT
let av = arrr.flat();

// NOTE: Flat has limitations, it can only convert a straight type of arrays.
// If An Array has collection of 1D,2D or different types of Array in it, IT CANNOT CHANGE

// Means, FLAT will only work , if An array has XD type of arrays in it, NOT DIFFERENT TYPES OF





// Array.isArray( obj )     // true or false

let arre = [1,3,5,5,3,4,5,6]
console.log(Array.isArray(arre))    // true



//---------------------------------------------------------------------------------
// Create array with NEw Trick
let arr = new Array(2,3,5,7,8,7)
// NOT NOT NOT NOT NOT NOT NOT NOT GOOD,
// Not recomended

// Because, If i pass only 1 value, It takes as LENGTH of Array
//          If i pass multiple vlu, It takes as ELEMENTS of Array



//---------------------------------------------------------------------------------
// Memory Allocation of Array in HEAP,

// Not continuous Memory Allocation
// Because Array holds Multiple Type of Elements, Number, String, Boolean, etc

// so each elements size is not determined,
