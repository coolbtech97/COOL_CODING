#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    system("cls");
    vector<int> a={1,3,5,7,9,2,4,6,8}, b=a, c=b;    // Vector Can Be Copied

    sort(b.begin(),b.end());                // Sort in Increasing Order
  //sort(b.rend(),b.rbegin(),greater<int>());  Sort in Increasing Order

    sort(c.begin(),c.end(),greater<int>()); // Sort in Decreasing Order
  //sort(c.rbegin(),c.rend());            Also Sort in Decreasing Order




    cout<<"A. ";

    for(auto i:a)   // Access Automatic
        cout<< i <<" ";                              // Print Original
    cout<<"\nB. ";

    for(int i=0;i<b.size();i++) // Access by Index
        cout<<b[i]<<" ";                             // Print Ascending
    cout<<"\nC. ";

    for(auto i=c.begin();i!=c.end();i++) // Access by Value
        cout<< *i <<" ";                            // Print Descending
    cout<<endl;
    return 0;
}