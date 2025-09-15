// Print 1 to N
#include<iostream>
using namespace std;
void printn(int n){
    if(!n)return;
    printn(n-1);
    cout<<n<<" ";
}
int main(){
    system("cls");
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    printn(n);
    return 0;
}