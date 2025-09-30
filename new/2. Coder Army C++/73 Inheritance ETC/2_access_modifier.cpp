
#include<iostream>
using namespace std;
class human{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void print(){
        cout<<a<<endl;// Within Class PRIVATE can be accessed    wow wow wow wow
        cout<<b<<endl;// within Class PROTECTED can be accessed  wow wow wow wow
        cout<<c<<endl;// within Class PUBLIC can be accessed     wow wow wow wow
    }
};
int main(){
    system("cls");
    human rohit;
    // rohit.a;         External codes can not access private
    // rohit.b;         External codes can not access protected
    cout<<rohit.c;    //External codes can ACCESS PUBLIC wow wow wow wow
}