#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
// Roman to Integer
// I[73] = 1                                Leetcode Q. 13
// V[86] = 5
// X[88] = 10
// L[76] = 50
// C[67] = 100
// D[68] = 500
// M[77] = 1000
int main()
{
    system("cls");
    string str="ix";
    // cout<<"Enter the string: ";
    // getline(cin,s);
    int s=str.size(),sum=0;
    // for(int i=0;i<s;i++)         // Handling Case Sensitive, down there
    //     if(str[i]>'Z')
    //         str[i]-=('z'-'Z');
    vector<int> arr(s,0);
    for(int i=0;i<s;i++){           // No More case sensitive, WOW WOW
        if(str[i]=='I' || str[i]=='i')
            arr[i]=1;
        else if(str[i]=='V' || str[i]=='v')
            arr[i]=5;
        else if(str[i]=='X' || str[i]=='x')
            arr[i]=10;
        else if(str[i]=='L' || str[i]=='l')
            arr[i]=50;
        else if(str[i]=='C' || str[i]=='c')
            arr[i]=100;
        else if(str[i]=='D' || str[i]=='d')
            arr[i]=500;
        else if(str[i]=='M' || str[i]=='m')
            arr[i]=1000;
        else{
            cout<<"Wrong Input";
            return 0;
        }
    }
    
    for(int i=0;i<s-1;i++)
    {
        if(arr[i]<arr[i+1])
            sum-=arr[i];
        else
            sum+=arr[i];
    }
    sum+=arr[s-1];
    // for(int i=0;i<s;i++)
    //     cout<<arr[i]<<" ";
    cout<<sum;
    return 0;
}