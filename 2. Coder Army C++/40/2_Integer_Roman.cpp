// Integer to Roman                 GFG.
#include<iostream>//                    Factorials of large numbers
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    system("cls");
    int n=1994;
    string ans="";
    vector<int> value={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    vector<string> symbol={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    for(int i=0;i<value.size();i++)
    {
        while(n>=value[i])
        {
            ans+=symbol[i];
            n-=value[i];
        }
    }
    cout<<"Roman of "<<n<<" is "<<ans<<endl;
    return 0;
}