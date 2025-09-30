#include<iostream>
using namespace std;
class human{
    public:
    int a;
};
class men: public human{
    public:
    int b;
};
int main(){
    system("cls");
    men a;
    a.a=5;
    human a;
    cout<<a.a;
}