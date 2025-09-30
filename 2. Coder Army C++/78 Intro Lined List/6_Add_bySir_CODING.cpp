// teachers notes and codes
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(){}
    node(int n){data=n;}
};
int main(){
    system("cls");
    node*head=NULL;     // Always try to Initialise with NULL
    
    int arr[]={2,4,6,8,10};
    // Insert The Node at beginning
    for(int i=0;i<5;i++){
        if(0)
            head=new node(arr[0]);
        else{
            node*temp;
            // temp->data=arr[i];           // WRONG
            temp = new node(arr[i]);        // CORRECT
            temp->next=head;
            head=temp;
        }
    }

    // Print the Linked List
    node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}