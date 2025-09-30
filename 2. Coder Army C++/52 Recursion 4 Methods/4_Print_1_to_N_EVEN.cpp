// Print 1 to N Even Numbers
#include<iostream>
using namespace std;
void evenpr(int n){
    if(n<2)return;
    evenpr(n-2);
    cout<<n<<" ";
}
int main(){
    system("cls");
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    if(n%2)--n;
    evenpr(n);
    return 0;
}