// Interitance
// The capacity of a class to derive property & characterstic fro, another class.

// This will only capable/work IF -- its PUBLIC
//                                   its PROTECTED
//                                   PRIVATE no no no no no no no
#include<iostream>
using namespace std;
class bank{
    private:
    int pri;
    protected:
    int pro;
    int anand;
    public:
    void access(int n){
        anand=n;
    }
    void display(){
        cout<<anand<<endl;
    }
    void pr();
    bank(){
        pri=10;
        pro=20;
    }
};
void bank::pr(){
    cout<<pri<<endl;
    cout<<pro<<endl;
}

int main(){
    system("cls");
    bank a1;
    a1.access(7);
    a1.display();
    a1.pr();
    return 0;
}