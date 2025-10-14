#include<iostream>          // Important point AT LAST 
using namespace std;        // PRIVATE MEMBERS CAN BE ACCESS OF same type of OBJECT within the class
class complex{
    private:
    int real,img;
    public:
    complex(){}
    complex(int r,int i){
        real=r;
        img=i;
    }
    /// Operator Overloading            ----- Try to Understand This
    complex operator+(const complex& obj) const {
        // return complex(real + obj.real, img + obj.img);

        // MY SPECIAL CODE , needed to create a **DEFAULT CONSTRUCTOR**
        complex temp;
        temp.real= real + obj.real;
        temp.img= img + obj.img;
        return temp;

    }
    ////// Display Function
    void display() const;
};
void complex::display() const{
    cout<<"Real: "<<real<<", Imaginary: "<<img<<endl;
}
int main(){
    system("cls");
    complex c1(3,4),c2(5,6);
    complex c3=c1+c2;   // c1. + (c2)
    c3.display();
    return 0;
}
/*
IMPORTANT POINT----
    line 18  obj.real  REAL IS PRIVATE:
        ans is --
            **ITs in that class and it can be access**
            PRIVATE MEMBERS CAN BE ACCESS OF same type of OBJECT within the class
*/