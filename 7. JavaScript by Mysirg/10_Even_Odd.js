// Bitwise Operator works on bits

// Even Odd Check Program
let n = 15;
if(n&1==0){
    console.log("Even");
}
else{
    console.log("Odd");
}

// FULL EXPLANATION->>>
// 15 = 000000 000000 000000 001111
//  1 = 000000 000000 000000 000001

// & operation
//  1 = 000000 000000 000000 000001
// Thatswhy it is is more efficient than "% 2"