// 'use strict'     // Can use strict mode in whole code
i=0;
console.log(i);

function f1(x,x){
    "use strict"    // Can use strict mode only in that function
    console.log(x,x);
}
f1(3,4);