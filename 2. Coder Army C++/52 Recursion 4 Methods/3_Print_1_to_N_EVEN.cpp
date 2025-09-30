// Print 1 to N Even Numbers
#include<iostream>
using namespace std;
void evenpr(int n,int limit){
    if(n>limit)return;
    cout<<n<<" ";
    evenpr(n+2,limit);
    // cout<<n<<" ";    // It will Only Print in Opposite WAY wow wow wow wow
}
int main(){
    system("cls");
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    evenpr(2,n);
    return 0;
}