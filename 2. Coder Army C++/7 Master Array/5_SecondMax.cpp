// To find 2nd largest;
// 1st largest,
// then again FIND largest [[ except the largest one
#include<iostream>
using namespace std;
int main()
{
    int a[6]={10,20,7,11,8,4};
    int i,l=INT_MIN,l2=INT_MIN;
    system("cls");
    for(i=0;i<6;++i)
    {
        if(a[i]>l)
        l=a[i];
    }
    for(i=0;i<6;++i)
    {
        if(a[i]>l2&&a[i]!=l)
        l2=a[i];
    }
    
    
        cout<<"Largest is "<<l;
        cout<<endl;
        cout<<"2nd Largest is "<<l2;
    return 0;
};
// ERROR ERROR