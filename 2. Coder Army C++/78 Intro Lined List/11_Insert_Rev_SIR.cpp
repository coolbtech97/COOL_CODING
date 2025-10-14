// 2 4 6 8
// Create a Reverse Linkedlist
#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(){data=0;next=NULL;}
    node(int n){data=n;next=NULL;}
};
void print(node *temp){
    if(!temp)return;
    cout<<temp->data<<" ";
    print(temp->next);
}
node* create(vector<int> &arr,int index,node *prev){
    if(index==arr.size())
        return prev;
    node *temp=new node(arr[index]);
    temp->next=prev;
    return create(arr,index+1,temp);
    
}
int main(){
    system("cls");
    vector<int> arr={2,4,6,8};
    node *head=create(arr,0,NULL);
    print(head);
    return 0;
}