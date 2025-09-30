//  HOW TO REMOVE VALUE FROM VECTOR
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    system("cle");
    vector<int>v={2,3,4,5,6};
    v.push_back(7);         // {2,3,4,5,6,7}        adds a last value
    v.pop_back();           // {2,3,4,5,6, }        removes last value
    v.clear();              // { , , , , , }        removes all values
    
}