// 4747384254287404824 can be not stored in INT, or LONG LONG INT
// But, This can be sored in a String WOW<WOWO<
// ADD String
// "2345"+"27"=??
#include<iostream>
#include<string>                // Leetcode Q.415
using namespace std;
int main()
{
    system("cls");
    string n1="26583", n2="698", ans="";
    int i=n1.size()-1, j=n2.size()-1;
    int sum=0,carry=0;
    if(i<j){
        swap(n1,n2);
        swap(i,j);
    }                   // Now 1st String is Greater or = 2nd
    while(j>=0)         // J is less, so it will end frst So no need to mention I too,.
    {
        sum=(n1[i]-'0'+n2[j]-'0'+carry);
        carry=sum/10;
        ans.push_back(sum%10+'0');
        i--,j--;
    }
    if(i==j)            // If Two's size are same, Then just add the Carry Alone
        ans.push_back(carry+'0');
    else{
        // i = n1.size()-n2.size()-1;
        while(i>=0)                 // Add the Biggers leftover With Carry
        {
            sum=(n1[i]-'0'+carry);
            carry=sum/10;
            ans.push_back(sum%10+'0');
            i--;
        }
        if(carry)       // If there is still Carry, Add It
            ans.push_back(carry+'0');
    }
    int start=0,end=ans.size()-1;       // Mirroring the Ans
    while(start<end)
    {
        swap(ans[start],ans[end]);
        start++,end--;
    }
    cout<<ans<<endl;
}