// Nth Stair
#include<iostream>
using namespace std;
int count(int n){
    if(n<2)return 1;
    return count(n-1)+count(n-2);
}
int main(){
    system("cls");
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    int total=count(n);
    cout<<"Total number of ways is "<<total<<endl;
    return 0;
}