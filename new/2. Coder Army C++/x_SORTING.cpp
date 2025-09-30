#include<iostream>
#include<string>
#include<algorithm>
void clrscr(){system("cls");}
using namespace std;
int main()
{
    clrscr();
    string s=" i like this program very much ";
    string temp="",ans="";
    int c=0,x=0,start,end;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]==' ' && x)
        {
            start=0;
            end=temp.size()-1;
            while(start<end)
                swap(temp[start],temp[end]),start++,end--;
            if(c)ans+=" ";
            ans+=temp,c++;
            temp="";
        }
        else{
            temp+=s[i];
            x++;
        }
    }
    ans+=temp;  // REMEMBER TO ADD LAST WORD********

    cout<<ans;
    return 0;
}
/*
ARRAY sort(arr, arr + n);
PAIR sort(p, p + n);

STRING sort(s.begin(),s.end());
VECTOR sort(v.begin(),v.end());
LIST sort(lst.begin(), lst.end());
DEQUE sort(dq.begin(), dq.end());
SET set_sorted(s.begin(), s.end());
MAP sort(mp.begin(), mp.end());
*/