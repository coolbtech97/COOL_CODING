// Adding New Elements BY SIR
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(){
        data=0;
        next=NULL;
    }
    node(int n){
        data=n;
        next=NULL;
    }
};
// void print(node*head){
//     cout<<head->data<<" ";
//     if(head->next==NULL)return;
//     head=head->next;
//     print(head);
// }
int main(){
    system("cls");
    node *head=NULL;
    int arr[4]={2,4,6,3};
    int n=4;
    for(int i=0;i<4;i++){
        if(head==NULL)
            head=new node(arr[i]);
        else{
            node*temp;
            temp=new node(arr[i]);
            temp->next=head;
            head=temp;
        }
    }
    // print(head);
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}