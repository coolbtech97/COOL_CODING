#include<iostream>
using namespace std;
void ln(){
    cout<<endl;
}
int main(){
    system("cls");
    char name='a';
    char *p=&name;
    cout<<&name;    // aÓ_Úq┐ // Random each time
    ln();

    cout<<(void*)&name;// 0x32053ffd6f

}