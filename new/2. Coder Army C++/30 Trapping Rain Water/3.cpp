// Trapping Rain Water      Practice by own
//                                  Q 42
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"Enter the number of pillars: ";
    cin>>n;
    vector<int> arr(n),premax(n),sufmax(n);
    cout<<"Enter "<<n<<" numbers";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
}