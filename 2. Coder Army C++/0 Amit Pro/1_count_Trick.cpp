// COUNT how many times 1 or 2 or 3
// from an array,
// and write the counting on another array
// EX__-- 4 1 2 5 1
//     one is 2 times|| two is 1 time|| three is 0 times|| four is 1 time, and five is also 1 time 
// ans -  2 1 0 1 1    
#include<iostream>
using namespace std;

int main()
{
    int a[5], b[5]={0}, i;
    
    cout<<"Enter 5 numbers between 1 and 5: ";
    for(i=0; i<5; i++) {
        cin>>a[i];
        // Validate input
        if(a[i] < 1 || a[i] > 5) {
            cout<<"Invalid input! Enter a number between 1 and 5: ";
            i--; // Retry this input
            continue;
        }
        b[a[i]-1]++; // Count immediately for efficiency
    }

    cout<<endl<<"The count is:";
    for(i=0; i<5; i++)
        cout<<" "<<b[i];
    
    return 0;
}