// New Concept
#include<iostream>
using namespace std;
int pointer();
int main(){
    system("cls");
    int arr[]={10,20,30,40,50,60};
    int *p = arr;
    cout<<*++p<<endl;
    cout<<"\n\n";
    return pointer();
}
// arr[1] = *(arr+1)

// p++ So, pointer is of int type
//      thastwhy, p=p+1
//                p=p+4   (int typee)
// SO p++ POINTS THE NEXT ELEMENT
// nd p-- POINTS THE PREVIOUS ELEMENT

// EX-
// arr[]={10,20,30,40,50}
// *p = &arr[0]         ( *p = 10 )
// if  p++              ( *p = 20 )
// THIS TRICK IS BEST

// CONCLUSION
// ptr++ : ptr + 1
//         512 + 1*4   (4 because of its INT type)

// SO I CAN USE ptr+i
//              ptr[i]
int pointer(){
    int arr[]={10,20,30,40,50,60,70,80} , n=8;
    int *p = arr;{// arr = &arr[0]
        cout<<"Array printing using Pointer[i] WOW WOW\n";
    }
    for(int i=0;i<n;i++)
        cout<<p[i]<<" ";
}