#include<iostream>
#include<vector>
using namespace std;

int main()
{
    system("cls");
    vector<int> v = {1, 2, 3, 4, 5};
    
    cout << "Using iterators: ";
    for(auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    cout << endl;
    
    // Alternative approaches to learn:
    
    // Range-based for loop (modern C++11+)
    cout << "Range-based loop: ";
    for(const auto& element : v)
        cout << element << " ";
    cout << endl;
    
    // Index-based loop
    cout << "Index-based: ";
    for(size_t i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    
    return 0;
}