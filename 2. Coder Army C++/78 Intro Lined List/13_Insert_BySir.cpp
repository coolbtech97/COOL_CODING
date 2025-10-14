// 2 4 6 8
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(){data=0;next=NULL;}
    node(int d){data=d;next=NULL;}
};
void print(node *head){
    if(head==NULL){
        cout<<endl;
        return;
    }
    cout<<head->data<<" ";
    print(head->next);
}
node * create(int arr[],int s,int index){
    if(s==index)
        return NULL;
    node *temp=new node(arr[index]);
    temp->next=create(arr,s,index+1);
    return temp;
}
int main(){
    system("cls");
    int arr[]={2,4,6,8};
    node *head=create(arr,4,0);
    print(head);
    // insert 'value' after 'x' position
    node *temp=head;
    int x = 2;
    int value=30;
    x--;
    while(x--)
        temp=temp->next;
    node *temp2=new node(value);
    temp2->next=temp->next;
    temp->next=temp2;

    print(head);
}