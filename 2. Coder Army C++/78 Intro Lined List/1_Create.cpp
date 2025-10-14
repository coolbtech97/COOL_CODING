// Introdunction to Linked List
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
int main(){
    system("cls");
    node*head,*anand;
    head = new node();
    // Head is a pointer, which points a NODE type of value
    
    head->data=4;
    head->next=NULL;
    // OR
    anand = new node(4);    // Putting value using ``CONSTRUCTOR``
}
// Insertion
// Deletion
// Search
// Update