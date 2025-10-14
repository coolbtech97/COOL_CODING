// Delete Particular Node
//      Some Problems---------------
#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(){data=0;next=NULL;}
    node(int nl){data=(int)nl;next=NULL;}
};
node * create(vector<int>& arr,int index){
    if(arr.size()==index)
        return NULL;
    node *temp=new node(arr[index]);
    temp->next = create(arr,index+1);
    return temp;
}
node*create(vector<int>& arr){
    return create(arr,0);
}
void print(node *head){
    if(head==NULL){
        cout<<endl;
        return;
    }
    cout<<head->data<<" ";
    print(head->next);
}
int main(){
    system("cls");
    vector<int> arr={2,4,6,8};
    node *head=create(arr);
    print(head);
    int del=2;  // Delete 2nd node
    node *temp=head;
    if(temp!=NULL && temp->next!=NULL){
        while(del--)
            temp-temp->next;
        temp->next=temp->next->next;
    }
    print(head);
    return 0;
}