// Function OVerloading
#include<iostream>
using namespace std;
class A{
    public:
    void func(int x){
        cout<<"I am first func() "<<x<<endl;
    }
    void func(int x, int y){
        cout<<"I am third func() "<<x<<" "<<y<<endl;
    }
};
int main(){
    A obj;
    obj.func(4);
    obj.func(4,5);
    return 0;
}
// Note: Function overloading is a compile time polymorphism.