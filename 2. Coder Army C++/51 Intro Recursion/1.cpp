// Recursion
// A function which calls itself again and again
// until a specific condition met
#include<iostream>
using namespace std;
void print(int i,int n){
    if(i>n){cout<<endl;return;}
    cout<<i<<" ";
    print(i+1,n);
    cout<<i<<" ";
}
int main(){
    system("cls");
    // PRINT 1 TO N
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    print(1,n);
}