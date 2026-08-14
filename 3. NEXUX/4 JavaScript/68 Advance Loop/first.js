let obj = {
    name:"Anand",
    age:22,
    gender:"male",
    city:"rajoun"
}


// For In loop

// It returns the VARIABLE NAMES, one by one
for(let k in obj){
    console.log(k)      // name
    console.log(obj[k]) // Anand
}

//--------------------------------------------------------------------------------------
//////  DEFINEPROPERTY      ////////////

// Writable:        Values can be changed
// Enumerable:      Hides 
//                  no action will be taken for them, if False
// Configurable:    Writable & Enumerable can be changed

//by deafault: these three are true
const obb = {
    name:"Anand",
    acc_num:12272872,
    balance:10000
}

Object.defineProperty(obb,"name",{
    writable:true,
    enumerable:true,
    configurable:true
})

//if we change the writtable, then the value will not change
Object.defineProperty(obb,"name",{writable:false})
obb.name = "cool"
console.log(obb.name) // Anand  , the value didnt changed at all
//                                because Writtable:false

// We can Lock writtable and enumerable by Falsing the Configurable