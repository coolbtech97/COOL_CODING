// CONTROL STATEMENTS
// controls statements in JavaScript are instructions that
// determine the flow of execution of code, whether it
// should be executed, skipped or repeated.

// TODAY'S TOPICS
// 1. Decision control statements.
// 2. Iterative control statements.
// 3. jump Statements.

//--------------------------------------------------------------------------

// 1. Decision controls statements->>

// a. if
// b. if else
// c. if else if
// d. ?:
// e. switch {remember to use break, brackets doesn't matters, dont think soo}

//-------------------------------------------------------------------------

// 2. Iterative controls statements->>

// a. while     - same as other langauges
// b. do while  - same as other languages
// c. for       - same as other languages
// d. for in    - same as PYTHON, But TAKES KEY, ( LIKE index );;;********
// e. for of    - same as PYTHON for in

// Note: "for of" JavaScript is same as "for in" PYTHON

// Note: for in JavaSript takes Key one by One-> Example:

// FOR IN
let d1 = {name:'Anand',age:21};
for(let i in d1){
    console.log(d1[i]);
}

let d2 = [11,22,33,44,55,66];
for(let i of d2){
    console.log(i);
}

//-------------------------------------------------------------------------

// 3. Jump statements->>

// a. break
// b. continue
// c. return+