// for in loop : Isko Array ke satj nahi lete

const arr = [10,20,30,12,24]
for(let key in arr){
    console.log(key)        // 0  1  2  3  4
    console.log(arr[key])   //10 20 30 12 24
}

// because we could also add something
arr.name = "Anand"
arr.age=21
for(let key in arr){
    console.log(key)        // 0  1  2  3  4   name   age
    console.log(arr[key])   //10 20 30 12 24  Anand   21
}
// So For Loop prints all the properties, that are even added after

// SO THATSWHY WE DO NOT USE 'FOR in' LOOP for ARRAY
// FOR IN loop only check for ENUMERABLE:true
// and does not sees that its array, or object
 

// HW for the next class

// defineProperty()     completed
// defineProperties()   Practice