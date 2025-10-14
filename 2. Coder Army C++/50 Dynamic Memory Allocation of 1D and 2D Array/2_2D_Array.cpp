// BY SIR
#include<iostream>
using namespace std;
int main(){
    system("cls");
    // Array create karna hai, jo store karega address
    int n,m;  // n = rows ,  m = cols
    cin>>n>>m;

    int **ptr = new int *[n];

    // Created 2D Array
    for(int i=0;i<n;i++)
        ptr[i]=new int[m];
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>ptr[i][j];
    
    // Now Print the value
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<ptr[i][j]<<" ";
        cout<<endl;
    }

    // Release the memory, From the heap
    for(int i=0;i<n;i++)
        delete[] ptr[i];
    delete ptr;

    // *********************************************************************

    int l,b,n;
    cin>>l>>b>>n;

    int ***ptr = new int **[l];
    // Create 2d array and store it's address in ptr
    for(int i=0;i<l;i++){
        ptr[i] = new int *[b];
        for(int j=0;j<n;j++)
            ptr[i][j]=new int[m];
    }
    for(int i=0;i<l;i++)
    for(int j=0;j<b;j++)
    for(int k=0;k<n;k++)
    ptr[i][j][k]=i+j+k;

    for(int i=0;i<l;i++)
    for(int j=0;j<b;j++)
    for(int k=0;k<n;k++)
    cout<<ptr[i][j][k]<<" ";
    return 0;
}