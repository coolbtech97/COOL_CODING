// Insert at beginning

// If linkedlist is empty  - Than Add Directly
// If Not Empty - Than Run That New Program
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(){}
    node(int value){
        data=value;
        next=NULL;
    }
};
int main(){system("cls");
    node *head;
    if(head->next==NULL){
        head = new node(15);
        head->data=4;
        head->next=NULL;
    }
    else{
        node*anand;
        anand = new node();
        anand->data=4;
        anand->next=head;
        head=anand;
    }
    cout<<NULL;
    return 0;
}