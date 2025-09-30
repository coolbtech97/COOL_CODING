// Multiple Inheritance
#include<iostream>
using namespace std;
class engineer{
    public:
    string specilization;

    void work(){
        cout<<"I have specilization "<<specilization<<endl;
    }
};
class youtuber{
    public:
    int subscribers;

    void content_creater(){
        cout<<"I have a subscriber base of "<<subscribers<<endl;
    }
};
class codeteacher:public engineer,public youtuber{//**** MULTIPLE INHERITANCE
    public:
    string name;
    codeteacher(string n,string spec,int subs){
        name=n;
        specilization=spec;
        subscribers=subs;
    }

    void showcase(){
        cout<<"My name is "<<name<<endl;
        work();             // ********* CAN CALL DIRECTLY {{ a1.word No Need }}
        content_creater();  // Directly Call wow wow wow wow
    }
};
int main(){
    system("cls");
    codeteacher a1("Anand","CSE",4900);
    a1.showcase();

}
/*
Whose constructor will get call first,
codeteaher constructor will call LAST""""

codeteacher: public engineer, public youtuber
   "LAST"       "1st Call"      "2nd Call"

multiple inheritance calls constructor
accordingly I WRITE 1st and 2nd
*/