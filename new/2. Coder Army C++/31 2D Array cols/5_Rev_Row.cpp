// Reverse each row of Matrix
// 2 3 4 5
// 1 2 6 8
// 4 9 3 2
//ANS - 1 , 1st copy its opposite side to another NEW ARRAY
//ANS - 2 , swap ( arr[i][j],arr[i][3-j] );
#include<iostream>
using namespace std;
void print(int arr[3][4],int x)
{
    if(!x)
        cout<<"\nThe Swapped Array\n";
    else if(x==1)
        cout<<"The Array\n";
    else if(x==2)
        cout<<"\nThe Dublicate Array\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    return;
}
int main()
{
    system("cls");
    int arr[3][4]={2,3,4,5,1,2,6,8,4,9,3,2};

    //Print Original array
    print(arr,1);

    int arr2[3][4]={0};     // Copying array like Mirror
    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++)
            arr2[i][j]=arr[i][3-j];

    //Print Dublicate Array
    print(arr2,2);

    // for(int i=0;i<3;i++)    // Swaping Not WORKING
    //     for(int j=0;j<4;j++)
    //         swap(arr[i][j],arr[i][3-j]);
    
    for(int i=0;i<3;i++)    // Swaping the Value within Row
    {
        int start=0,end=4-1;
        while(start<end)
            swap(arr[i][start],arr[i][end]),start++,end--;
    }
    //Print the swapped array
    print(arr,0);
    return 0;
}