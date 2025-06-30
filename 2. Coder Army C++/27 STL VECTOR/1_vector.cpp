// Profits of using Vector
// many already function are inclined with vector
// ex-- It can be sort by 1 line code
// ex-- size can be find by one line code
#include<iostream>
#include<vector>            // Use Vector Header File
using namespace std;
int main()
{
  //vector <data type> name
    vector<int>a;           // vector a is created

    vector<int>n={2,4,6,8}; // It can be create like arrays also...

    vector<int>b(4);        // vector b is created of 4 size
                            //                          { , , , }
    vector<int>c(2,3);      // vector c is created of 5 size with all value 2
                            //                          {3,3}
    
    // How to insert a value in vector                // no space to put value  
  //name.push_back(value)                             // it CREATES NEW VECTOR OF "double" size     , copy already values
  //                                                     and put the value, and deleted the real vector
    c.push_back(4);         //                          {3,3,4, }
  //AGAIN                                               now, here is space
  //                                                    so it puts value directly
    c.push_back(7);         //                          {3,3,4,7}
  //Again
    c.push_back(9);         //                          no space to put value
  //                                                    it again creates new vector of "double" size  , copy already values
  //                                                    and put the value, and deletes the real vector
  //                                                    {3,3,4,7,9, , , }

    c.push_back(6);         //                          here is space already
                            //                          {3,3,4,7,9,6, , }
}
//                                                VECTOR WORKING PRINCIPLES
//                                             OR VECTOR IMPLEMENTATION PATH
//Q. Why push back creates DOUBLE SIZE OF ANOTHER VECTOR,
//why not it creates single box and put values,
//ANS. VECTOR is created in HEAP, to increase the size of vector, think if Front memory is alreadyy allocated to other variable
//     so it search for double size of memory space in the heap, and allocates there

//Q.  and waste so much memory, by taking Double size of memory in the RAM,
//ANS. In future if again PUSH_BACK needed, it should not again need to find memory for its double size,
//     it can directly put the value to its place//;;   Avg Time Complexity O(1) {Not O(n)}