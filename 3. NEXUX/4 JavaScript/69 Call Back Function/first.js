const arr = [10,20,30,40,50]

// for in   : gives the key
for(let k in arr){
    console.log(k)      // 0  1  2  3  4
    console.log(arr[k]) // 10 20 30 40 50
}

// for of   : gives the value
for(let k of arr){
    console.log(k) // 10 20 30 40 50
}


// we can also use 'FOR OF' for String
let str = "Anand Kumar"
for(let value of str){
    console.log(value)
}

//  DONT USE 'FOR OF' Loop in Object*************
//      ERROR ERROR
//          Object is not Itterable

//-----------------------------------------------------------------------------------------------------

// Functions Call can be pass as Arguments

// function f1(fk){
//     console.log("Function 1")
// }

/////// IN THE SECOND FILE..................