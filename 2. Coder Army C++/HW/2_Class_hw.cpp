// create a class called BOOK with the following attributes
// title + author + year
#include<iostream>
using namespace std;
class book{
    string title,author;
    int year;
    int *p,*arr = new int[20];
    public:
    book(){
        title="";
        author="";
        year=0;
    }
    book(const string& title,const string& author,const int& year){
        this->title = title;
        this->author = author;
        this->year = year;
    }
    void print(){
        cout<<title<<", "<<author<<", "<<year<<endl;
    }
    ~book(){
        delete p,arr;
    }
};
int main(){
    system("cls");
    book a1("Matilda", "Roald Dahl", 1988),a2("The Giving Tree", "Shel Silverstein", 1964);
    a1.print();
    a2.print();
    return 0;
}