// Static Memory Creates Automatically
#include<iostream>
using namespace std;
class customer{
    string name;
    int acc_num,balance;
    public:
    static int total_customer;   // STATIC keyword  CREATE*********
    static int total_balance;
    customer(string name,int num,int bal){
        this->name=name;
        acc_num=num;
        balance=bal;
        total_customer++;
        total_balance+=bal;
    }
    static void accessStatic(){         // This function calling DIFFERENT
        cout<<total_customer<<endl;     // a1.accessStatic() NOT NOT
        cout<<total_balance<<endl;      
    }
    void deposit(int amount){
        if(amount>0){
            balance+=amount;
            total_balance+=amount;
        }
    }
    void withdraw(int amount){
        if(amount<=balance && amount>0){
            balance-=amount;
            total_balance-=amount;
        }
    }
    void display(){
        cout<<name<<" "<<acc_num<<" "<<balance<<" "<<total_balance<<endl;
    }
    void display_total(){
        cout<<total_customer<<endl;
    }
};
int customer::total_customer=0;  // Initialise*********
int customer::total_balance=0;

int main(){
    system("cls");

    // int total_customer=3;
    customer a1("Anand",1,1000);
    //total = 1
    customer a2("Mohit",2,1800);
    customer a3("Rohit",3,2100);
    //total=3
    cout<<a1.total_customer;
    // I can also change TOTAL from here
    customer::total_customer=0;  // edit STATIC variables like this****
                        // IF Static IS PUBLIC:
    
//  a1.accessStatic();  // WRONG WAY
    // Static Function called on ""CLASS NAME""
    customer::accessStatic();   //CORRECT CORRECT
}