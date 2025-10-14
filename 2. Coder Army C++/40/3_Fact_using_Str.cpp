// Factorial of a Number
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
string fact(string str,int n)
{
    string s="";
    int size=str.size(), num, carry=0;
    vector<int> arr(size,0);
    for(int i=0;i<size;i++)
        arr[i]=str[i]-'0';//'0'=48
    for(int i=size-1;i>=0;i--)
    {
        num=(arr[i]*n)+carry;
        s+=((num%10)+'0');
        carry=num/10;
    }
    while(carry)
    {
        s+=((carry%10)+'0');
        carry/=10;
    }
    int start=0,end=s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++,end--;
    }
    return s;
}
int main()
{
    system("cls");
    int n=8;
    // cout<<"Enter the Number: ";
    // cin>>n;
    string s="1";
    for(int i=2;i<=n;i++)
        s=fact(s,i);
    cout<<"Factorial of "<<n<<" is "<<s<<endl;
    return 0;
}