// If-Else

// same

// If Else Ladder

// for loop

// while loop

//--------------------------------------------------------------------------------------------------
const obj ={
    name:"Anand",
    age:"22",
    amount:420
}


console.log(Object.values(obj));    // Returns all the values as ARRAY***


console.log(Object.keys(obj));      // Returns Only the Variable names..... as an arr

let k = Object.keys(obj);
for(let i=0;i<k.length;i++){
    console.log(i);         //0
    console.log(k[i]);      // name
    console.log(obj[k[i]]); // Anand
}
