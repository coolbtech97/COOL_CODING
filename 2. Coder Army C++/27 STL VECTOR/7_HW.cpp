#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5}, x=v;
    v.push_back(6);        // Adds value on Last
    v.pop_back();          // Removes last value
    v.erase(v.begin()+3); // it removes 3rd Index value, and swaps all Forward values
    v.insert(v.begin()+3,55); // it swaps to forwars and add value[55] to 3rd Index
    int s=v.size();
    int c=v.capacity();
    v[0]=15;    // Directly change value of fix Index
    sort(v.begin(),v.end());                    // Sort
    sort(x.begin(),x.end(),greater<int>());     // Sort decreasing order
    sort(x.rbegin(),x.rend());                  // Sort decreasing order Too

    // HW

    //Search
    bool found = binary_search(v.begin(),v.end(),4);
    auto it = find(v.begin(),v.end(),5);

    //Count
    int times = count(v.begin(),v.end(),5);
    
    //Maximum
    auto max = max_element(v.begin(), v.end());
`   auto min = min_element(v.begin(), v.end());

    // To get the actual values:
    int maxValue = *max_element(v.begin(), v.end());
    int minValue = *min_element(v.begin(), v.end());
}