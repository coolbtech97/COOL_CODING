// Virtual Function
// also known as -- Run Time Polimorphism
#include<iostream>
#include<Vector>
using namespace std;
class animal{
    public:
    // virtual void speak()=0;  PURE VIRTUAL FUNCTION
    //      (assign 0)        ALSO known as ABSTRACT CLASS

    virtual void speak(){   // virtual - tells it
        cout<<"ANIMAL";     //    Make it AT RUN time, not in Compile Time``**
    }
};
class dog:public animal{
    public:
    void speak(){
        cout<<"DOG";
    }
    void roti(){
        cout<<"ROTI";
    }
};
class cat:public dog{};
int main(){system("cls");
    animal *p;
    p = new dog;
    p->speak();// PRINTS DOG
  //p.speak()   understand that p is obj of animal so
  //            So, within animal CLASS , speak PRINTS ANIMAL``
  //                    DECIDED ON RUN TIME
    
  //p->roti();  // ERROR- roti is only present in dog, NOT in ANIMAL
  //                   p points at Animal CLASS
    animal *p;
    vector<animal*> anim;// <animal*> *  * new - means POINTER is needed to allocate memory in HEAP
    anim.push_back(new dog);        // REMEMBER to create POinter of PARENT CLASS````
    anim.push_back(new cat);
    anim.push_back(new dog);
    anim.push_back(new cat);
    // note - vector is of ANIMAL class,
    // DOG Class could be make, because of ``INHERITANCE******************

    for(int i=0;i<anim.size();i++){
        animal*p = anim[i];
        p->speak();     // Why is That error
    }

    return 0;
}
/*
new dog - will create at RUN TIME,
at compile time - p is of ANIMAL class``
so , it got Decided on Compile time, that Which Function will get call

SOLUTION-   virtual keyword
```` It tells compiler to NOT CREATE FUNCTION at Compile Time,
        create function at run time

ANS - So, p points ANIMAL type class
    But p store DOG type class
    So, DOG class Function SPEAK FUNCTION GET CALL ON THE run time

conclusion - Virtual keyword tells compiler
to decide which function should call _ AT RUN TIME
*/