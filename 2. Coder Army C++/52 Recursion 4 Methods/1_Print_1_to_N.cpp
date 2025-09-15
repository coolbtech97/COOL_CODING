// Print 1 to N
#include<iostream>
using namespace std;
void printn(int x,int limit){
    if(x>limit)return;
    cout<<x<<" ";
    printn(x+1,limit);
}
int main(){
    system("cls");
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    printn(1,n);
    return 0;
}