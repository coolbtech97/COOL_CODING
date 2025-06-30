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
  //name.push_back(value)                             // it "doubles" the size
  //                                                     and put the value
    c.push_back(4);         //                          {3,3,4, }
  //AGAIN                                               now, here is space
  //                                                    so it puts value directly
    c.push_back(7);         //                          {3,3,4,7}
  //Again
    c.push_back(9);         //                          no space to put value
  //                                                    its "doubles" the size
  //                                                    and put the value
  //                                                    {3,3,4,7,9, , , }

    c.push_back(6);         //                          here is space already
                            //                          {3,3,4,7,9,6, , }
}
//                                                VECTOR WORKING PRINCIPLES
//                                             OR VECTOR IMPLEMENTATION PATH