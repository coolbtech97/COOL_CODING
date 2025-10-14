// Sort Vowel in a String
// leetcode Q2785
// eeoe     vowels
// eeeo     vowels Sort
// leetcedo answer
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool vowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 1;
    return 0;
}
int main()
{
    system("cls");
    string str="leetcode",str2="";
    vector<int> index;
    int s=str.size();
    for(int i=0;i<s;i++)
        if(vowel(str[i])){
            index.push_back(i);
            str2+=str[i];
        }
    s=str2.size();
    sort(str2.begin(),str2.end());        // Sort [str2] All Vowels

    // Filling the ordered vowels
    for(int i=0;i<s;i++)
        str[index[i]]=str2[i];
    
    cout<<str<<endl;
    return 0;
}