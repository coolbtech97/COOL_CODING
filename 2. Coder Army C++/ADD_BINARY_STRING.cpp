#include<iostream>
#include<string>
using namespace std;
string addstring(string& s1, string& s2)
{
    int temp = 0;
    string num = "";
    int i = s1.size() - 1, j = s2.size() - 1;

    while (i >= 0 || j >= 0 || temp) {
        int sum = temp;
        if (i >= 0) sum += s1[i--] - '0';
        if (j >= 0) sum += s2[j--] - '0';
        num += (sum % 2) + '0';
        temp = sum / 2;
    }
    int start=0,end=num.size()-1;
    while(start<end)
    {
        swap(num[start],num[end]);
        start++;
        end--;
    }
    return num;
}
int main()
{
    system("cls");
    string s1="01001001", s2="0110101";
    string result = "";
    result=addstring(s1, s2);
    cout << "The sum of binary strings " << s1 << " and " << s2 << " is: " << result << endl;
    return 0;
}