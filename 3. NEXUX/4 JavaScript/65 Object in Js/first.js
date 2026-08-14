// Nested Object

const obj = {
    name:"Anand",
    obb : {
        pincode:248183,
        city:"Bhagalpur"
    }
}

console.log(obj.name)
console.log(obj.obb.pincode)
console.log(obj.obb.city)

const obj2 = Object.assign({},obj);    // it also changes the 1st passed object, so we sended the first a empty object.

console.log(obj2)

//------------------------------------------------------------------------------

// Destructing of an object     - Take out some values of Object

let ob = {
    name:"Anand",
    money:440,
    balance:40,
    age:22
}

const {name,balance} = ob;//    name and balance get out

// now i can print it
console.log(name)
console.log(balance)


// We can also name it by myself
const {name:full_name,balance:amount,age:umar} = ob;

console.log(full_name)
console.log(amount)
console.log(umar)


// Skipped many things






// THERE ARE ALSO DESTRUCTURE AND ......etc