#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    system("cls");
    vector<int> v= {1,3,5,7,9,2,4,6,8};
    sort(v.begin(),v.end());


    //Binary Search In a Sorted Vector      //      //
    if(binary_search(v.begin(),v.end(),4))
        cout<<"4 is available";
    else
        cout<<"4 Not Found";
    //      if 4 is available, It return 1, Else 0


    //Find the Index Position of that value
    //  find(v.begin(),v.end(),4);  reference of 4  [Itretor]
    //  - with reference of 1st value   =ANS INDEX
    cout<< find(v.begin(),v.end(),4) - v.begin() <<endl;
    return 0;
}