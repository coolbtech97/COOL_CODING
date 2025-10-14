// Find Missing AND Repeating
// 4 3 2 1 2 7 6
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr={4,3,2,1,2,7,6};
    int s=arr.size();
    int missing,repeating;
    vector<int> count(s,0);
    for(int i=0;i<s;i++)
        count[arr[i]-1]++;
    
    for(int i=0;i<s;i++)
        if(count[i]==2)
            repeating=i+1;
        else if(!count[i])
            missing=i+1;
    cout<<"Missing Number: "<<missing<<endl;
    cout<<"Repeating Number: "<<repeating<<endl;
    cout<<endl;
    return 0;
}