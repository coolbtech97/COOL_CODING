// Insert Teacher's code
#include<iostream>
#include<cstdlib> // for system("cls")
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
        this->data=n;
        this->next=NULL;
    }
};
void print(node*head){
    node*temp=head;

    cout<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl; // ensure newline after printing list
    return;
}
int main(){
    system("cls");
    // 2 4 6 8
    int arr[4]={2,4,6,8};;
    node*head=NULL;
    node*tail=head;
    // print(head); // optional
    for(int i=0;i<4;i++){
        if(tail==NULL){
            head = tail = new node(arr[i]); // FIX: set head and tail on first insert
        } else {
            tail->next = new node(arr[i]);  // FIX: append at tail
            tail = tail->next;              // FIX: advance tail
        }
    }
    print(head);
}