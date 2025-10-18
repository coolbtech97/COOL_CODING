#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>& nums, int k) {
        int s = nums.size();
        k%=s;
        if(k==s)return;
        for(int i1=0;i1<k;i1++){
            int temp=nums[s-1];
            for(int i=s-1;i;i++)
                nums[i]=nums[i-1];
            nums[0]=temp;
        }
    }
int main(){
    system("cls");
    vector<int>arr={1,2,3,4,5,6,7,8};
    int k=2;
    for(auto d:arr)
        cout<<d<<" ";
    cout<<endl;
    rotate(arr,3);
    for(auto d:arr)
        cout<<d<<" ";
    return 0;
}