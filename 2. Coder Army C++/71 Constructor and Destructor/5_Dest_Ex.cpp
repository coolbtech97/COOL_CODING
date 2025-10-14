#include<iostream>
using namespace std;
class customer{
    string name;
    int *data;
    // constructor
    public:
    customer(){
        name = "Anand";
        data = new int;
        *data = 10;
        cout<<"Constructor Created"<<endl;
    }
    ~customer(){
        delete data;
        cout<<"Data Deleted"<<endl;
    }
};
int main()
{
    customer a1;
    customer a2 = a1;
}