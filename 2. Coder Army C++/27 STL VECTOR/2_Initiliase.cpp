#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a;

    vector<int>b(4);
    //Size can be decide by the user
    int n;
    cin>>n;
    vector<int>x(n);            //WOW
    //Values can be take by the user
    for(int i=0;i<n;i++)
        cin>>x[i];

    vector<int>c(2,3);
    //          (size,values)

    vector<int>p={2,4,6,8};
}
//          int arr[n]; WRONG WRONG (size should be constant , not to be filled by the user)

//          vector<int>arr(n);      allow allow
