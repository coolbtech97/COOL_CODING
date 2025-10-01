// Insert Teacher's code
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
void print(node*head){
    node*temp=head;

    cout<<endl;
    while(temp!=NULL){
        cout<<temp.data<<" ";
        temp=temp->next;
    }
    return;
}
int main(){
    system("cls");
    // 2 4 6 8
    int arr[4]={2,4,6,8};;
    node*head=NULL;
    node*tail=head;
    print(tail);
    for(int i=0;i<4;i++){
        if(head==NULL)
            head=new node(arr[i]);// or arr[0]
        else{
            // node*tail=head; // I used to initialise at the beginning
            while(tail->next!=NULL)
                tail=tail->next;
            node*temp=new node(arr[i]);
            tail->next=temp;
          //tail->next=new node(arr[i]);
        }
    }
    print(head);
}