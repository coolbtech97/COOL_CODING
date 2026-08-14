// Print in New Way

let name = "Anand";

console.log('My name is ${name}')
console.log("My name is ${name}")
console.log("My name is",name)


// to print ' , use "
console.log("'I am Anand Kumar")

// to print " , use '
console.log('"I am Anand Kumar')


let name2 = "Anand\nKumar"
// used escape character \


// STRING HAS INDEXING

let str = "Mango"
console.log(str[0])
console.log(str[1])
console.log(str[2])
console.log(str[3])
console.log(str[4])

console.log(str.charAt(0))
console.log(str.charAt(1))
console.log(str.charAt(2))
console.log(str.charAt(3))
console.log(str.charAt(4))


// To lowercase
console.log(str.toLocaleLowerCase())                // It doesnt change the Original String

// To Uppercase 
console.log(str.toUpperCase())                      // It only returns the functioned String

// NOTE: only length is NOT function
//       and everything is function , ok ok

console.log(str.length)


// indexOf
console.log(str.indexOf("ng"));   // 2     Mango

// lastIndexOf
console.log(str.lastIndexOf("ng"))  //3     Mango

// NOTE: if not founds then it returns -1
// So to check Is it PRESENT or NOTx
console.log(str.includes("ng"))     // RETURNS TRUE or FALSE    , if present



// Slicing
let s = "HeloDon";
console.log(s.slice(0,3)); // Hel           Starting include,   Last NOT include

console.log(s.substring(0,3)); //Hel        Starting include,   Last NOT include

// SLICE can take Negative Index

// Substring cannot take Negative Index



// Replacing Content

let st = "Hello I am Anand";

st.replace("Anand","Cool")
// replace only 1st Substring

st.replaceAll("Anand","Cool")
// replace ALL Substring

console.log(st)     // Hello I am Cool



// Split
let str1 = "I am Anand Kumar";

let arr = str1.split(" ");      // Split on the behalf of " "

console.log(arr)




// Trim     - removes the Starting & Endling SPACES and return
//            NOT changes the real String

let ss = "  Anand Kumar   "
console.log(ss.trim())

console.log(ss.trim().length)   //return the length after removing starting and ending SPACES



// New way to create String

let sst = new String("Hello Anand COOL")

console.log(sst)
console.log(typeof sst) // object

//      Main objective of using this 
//      TO take memory in HEAP***

//      IT comes with Many Inbuild PROPERTIES**********
//      wow wow
