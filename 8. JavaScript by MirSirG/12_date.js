// Date and TIme

let d1 = new Date();
let d2 = new Date('2025-05-20');
let d3 = new Date(2025,4,20);
console.log(d1);
console.log(d2);
console.log(d3);

console.log(d1.getFullYear());
console.log(d1.getMonth());
console.log(d1.getDate());
console.log(d1.getDay());
console.log(d1.getTime());
console.log(d1.getHours());
console.log(d1.getMinutes());
console.log(d1.getSeconds());

// COUNT FROM   1ST JAN 1970 - given date
console.log(Math.trunc(d1.getTime()));  // Returns in Millisecond
console.log(Math.trunc(d1.getTime()/1000));  // In Seconds
//...etc

d3.setFullYear(2026);
d3.setMonth(4);
d3.setDate(1);
// d3. ...... many more

//WE CAN ALSO SUBTRACTS DATES AND TIME
//                                    IT gives answer in MilliSecond****
let dat = new Date('2066-06-30');   // can convert by dividing 1000 , 60 , 24 , etc
let dat2= new Date('2025-05-20');

let ms = dat-dat2;
console.log(ms);

console.log(d1.toLocaleDateString());// Output 21/10/2025 "nice fromat"
// Format Designing************
console.log(d1.toLocaleDateString('default',{
    weekday:'long',
    day:'2-digit',      // Many Formats
    month:'short',
    year:'numeric'
}));