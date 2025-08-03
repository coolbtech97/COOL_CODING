// cin>>str;        ERROR
#include <iostream>
#include <string>
using namespace std;
int main()
{
    system("cls");
    string str;         // Anand Kumar
    // cin>>str;           // only takes Anand
    int size=str.size();//      _ is like \0 For It
    cout << "Size is "<< str.size()<<endl;
    getline(cin, str); // Takes full line input
    cout << "Total size is "<< str.size();
}