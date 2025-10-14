// Add Node at the End,   Recursion
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(){
        data=0;
        next=NULL;
    }
    node(int data){
        this->data=data;
        next=NULL;
    }
};
node* create(vector<int> &arr,int index){     // MYSELF wowo woww wwow wooo
    if(index==arr.size())
        return NULL;
    node *temp=new  node(arr[index]);
    temp->next=create(arr,index+1);
    return temp;
}
void print(node *temp){
    if(temp==NULL)
        return;
    cout<<temp->data<<" ";
    print(temp->next);
}
int main(){
    system("cls");
    vector<int> arr={2,4,6,8};
    node *head=create(arr,0);
    print(head);
    return 0;
}