// MEMORY MANAGEMENT
// Static vs Dynamic Memory Allocation
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int x,y,z;
    x=10,y=20,z=30;
    int n;
    // cin>>n;


    // int ar[n];              IT CAN CIVE ERROR AT RUN TIME OMG OMG OMG OMG
    // int arr[100000000];     IT WILL GIVE ERROR AT COMPILE TIME WOW WOW WOW WOW

    // To Take Memory in HEAP**
    // Keyword - NEW
    int *p = new int;

    delete p;

    int *p1 = new int[20];
    for(int i=0;i<20;i++)
        p1[i]=i+1;
    
    for(int i=0;i<20;i++)
        cout<<p1[i]<<" ";

    delete []p1;        // IMP IMP to delete an dynamically array
}