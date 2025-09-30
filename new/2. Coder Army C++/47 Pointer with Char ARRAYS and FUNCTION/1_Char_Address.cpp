// Pointers with char array
#include<iostream>
using namespace std;
int main(){
    system("cls");
    char arr[5]="1234";
    // cout<<arr;

    cout<<&arr[0];  // It will print 1234
                    // char Implementation like that
                    // it will print if there was value
                    // Stop when found NULL character

    
    char *p=&arr[0]; // arr = &arr[0]

    cout<<endl<<*p;   // do same thing

    // Final OPTION to Print Address of the Char Variable

    cout<< (void*)arr;
    // void pointer indicates address, but not tell it is char type,
    //                  So, it prints its address as usual
    return 0;
}