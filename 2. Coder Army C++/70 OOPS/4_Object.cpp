// Object
// It is an entity that has a state and behaviour
// Anything that exist in physical world
#include<iostream>
using namespace std;
class a{
    char c;
    char d;
    int b;
};
int main()
{
    system("cls");
    a obj;
    cout<<sizeof(obj)<<endl;        // Concept of Padding
    return 0;                       // Take memory, but read data fast
}                                   // 32 bit OS    counts 4-4, gives padding to unused