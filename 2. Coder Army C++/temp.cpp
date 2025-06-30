#include<iostream>
#include<vector>
using namespace std;
int main()
{system("cls");
    vector<int> a={1,2,3,4}, b={6,7,8,9};
    a.push_back(5);
    b.push_back(10);
    // a.pop_back();
    // a.clear();
    a.erase(a.begin()+2);
    int s=a.size();
    cout<<s<<endl;
    for(int i=0;i<s;i++)
        cout<<a[i]<<" ";
    return 0;
}