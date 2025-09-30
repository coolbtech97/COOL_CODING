// Create a derived Class
#include<iostream>
using namespace std;
// PRIVATE > PROTECTED > PUBLIC
class human{
    protected:
    // public:         ----------------------------------  ^^
    string name;       //        --------------             !
    int age,weight;                                       //!
};                                                        //!
//                                                          !
class student: public human{                              //!
    int roll_number, fees;                                //!
};                                                        //!
int main(){                                               //!
    system("cls");                                        //!
    student a;                                            //!
    // a.name="anand";      protected * public = protected^^
    
}