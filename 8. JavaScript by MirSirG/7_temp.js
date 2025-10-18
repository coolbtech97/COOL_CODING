let x={
    name:'Anand',
    age:21
}
console.log(x)      // Output-> { name: 'Anand', age: 21 }
// also x.name
// also x['name']

let a=[10,20,30]
console.log(a)      // Output-> [ 10, 20, 30 ]

function f1(){
    console.log("Hello");
}
console.log(f1)     // Output-> [Function: f1]
console.log(f1())     // Output-> it calls f1(){where print Hello}
//                                and, nothing else, PRINTS -> undefined


console.log(typeof(x));

function f1(){
    console.log("Anand");
}
f1.x=10;
console.log(f1['x']);