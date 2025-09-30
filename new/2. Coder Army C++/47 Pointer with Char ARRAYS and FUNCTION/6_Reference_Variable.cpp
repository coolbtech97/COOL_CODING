// REFERENCE_VARIABLE
// int num=10;
// int &temp=num;
// IT ALSO POINTS THE SAME LOCATION
#include<iostream>
using namespace std;
void swapp(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    system("cls");
    int first = 1,second = 2;
    cout<<first<<" "<<second<<endl;
    swapp(first,second);
    cout<<first<<" "<<second<<endl;
}