// OBJECT
// key:value pairs OBJECT


// how to create object

const obj = {
    "name" : "Anand",
    account_balance : 10000,
    "gender" : "Male",
    "fathers name": "Vikash Kumar Rajak"        // double colon helps in creating spaced Varaible
}

console.log(obj.name)
console.log(obj["name"])
// 2 WAYS to access the members of object

// obj.member

// obj [ " member " ]



// for numbers
const ob = {                                 
    name:"Cool",
    0:10,
    1:20,
    2:40
}
console.log(ob.name)
// console.log(obj.1) error

console.log(ob["name"])
console.log(ob["1"])
console.log(ob[1])         // NUMBERS can be Pass Without as a STRING



// Comparing Array and Object

let obj2 = {
    0:10,
    1:20,
    2:30,
    3:40,
    length:4
}

let arr = [10,20,30,40]

// THERE ARE APPROX SAME BROTHER WWOOWWOO




// WE CAN ADD PROPERTIES LATER ALSO,
// delete
// modify

// let Obb = {
    // Obb(){}
    // roll:9
    
// }

// console.log(Obb)

// const a2 = new Obb()


// WE CAN ADD PROPERTIES AFER ALSO

// Like we can create an EMPTY Object

// And after that , we can add property

// ex--



// const pre = {
//     name:""
// }
// let a1 = new pre()
// a1.name = "Anand"
// a1.roll = 24
// a1.marks= 97.4
// a1.balance=10000

// IT MEANS

// If, Property already exist, then the data is modified,
// If, Property does not exist, then the Property is Updated





// Third method to create object
// 




// 4th method
class people{                           // name, roll, age property does not exist
    constructor(name,roll,age){         // SO, The properties Automatically Created
        this.name = name;
        this.roll = roll;
        this.age = age;
    }
}
let person1 = new people("Anand",24,21)


console.log(person1)


//----------------------------------------------------------------------------------
// COMMON METHODS OF OBJECTS----------->>>>>

// 1. Object.keys()
// 2. Object.values()
// 3. Object.entries()
// 4. Object.assign() : Copies properties from one or more source objects to a target
//                      object.
// 5. Object.freeze() : Prevents any modification to an object.
// 6. Object.sea()    : Prevents adding or removing properties but allows modification
//                      of existing properties.
// |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||kl
// |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//----------------------------------------------------------------------------------

// 1. Access all the "keys" of the Object,       key:value

// Object.keys(obj)
// It returns an Array***   , returns KEYS***

let arr3 = Object.keys(people)
console.log(arr3)               // []   The people object is initially empty

    arr3 = Object.keys(person1)
console.log(arr3)               // [ 'name', 'roll', 'age' ]



//----------------------------------------------------------------------------------

// 2. Access all the "keys" + "values" of the Object,  key:value

// Object.entries(obj)
// It returns an 2D Array***   , returns Keys and Values

    arr3 = Object.entries(people)
console.log(arr3)               // []   The people object is initially empty

    arr3 = Object.entries(person1)
console.log(arr3)               // [ [ 'name', 'Anand' ], [ 'roll', 24 ], [ 'age', 21 ] ]


//----------------------------------------------------------------------------------

// 3. 