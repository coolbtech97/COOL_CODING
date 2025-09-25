// Operator Overloading
// In C++, operators can be overloaded to provide custom behavior for user-defined types (like classes)
// Remember to CREATE **DEFAULT CONSTRUCTOR**
#include<iostream>
using namespace std;
class base{
    public:
    int first;
    base(){first=0;}
    base(int x){
        first=x;
    }
    base operator +(base &x){
        base ans;
        ans.first=first+x.first;
        return ans;
    }
};
int main() {
    base a(1),b(2);
    base c=a+b; //error: no match for 'operator+' (operand types are 'base' and 'base')
    cout<<c.first;

    return 0;
}
