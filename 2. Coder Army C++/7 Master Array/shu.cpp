#include<iostream>
using namespace std;
int main(){
    system("cls");
    int a[]={1,2,3,4,5,6};
    int s = 6;
    int b[s];
    for(int k=1;k<=2;k++){
    b[0]=a[s-1];
    for(int i=1;i<s;i++){
        b[i]=a[i-1];
    }
    for(int i=0;i<s;i++){
        a[i]=b[i];
    }
}
for(auto x:a)
    cout<<x<<" ";
}