// already 26
// need to add 2 4 6 3
#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(){data=0;next=NULL;}
    node(int n){data=n;next=NULL;}
    void front(int n){
        if(next==NULL){
            data=n;
            return;
        }
        node*temp;
        temp->data=n;
        temp->next=next;
        next=temp;
        delete temp;
    }
    void print(node*head){
        if(this->next==NULL)return;
        cout<<data<<" ";
        // print(next);
    }
};
int main(){
    system("cls");
    node *head;
    vector<int> arr={10,20,30,40,50,60};
    for(int i=0;i<arr.size();){
        head->front(arr[i++]);
    }
    for(int i=0;i<arr.size();){
        head->front(arr[i++]);
    }
}