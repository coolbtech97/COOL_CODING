// 2 4 6 8
// x=2 mean Insert 30 after 2 node
//              SOME PROBLEM-----------
#include<iostream>
#include<vector>
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
node* create(vector<int> &arr,int index){
    if(index==arr.size())
        return NULL;
    node *head=new node(arr[index]);
    head->next=create(arr,index+1);
    return head;
}
void insert(node *head,int count,int pos,int n){
    if(count==pos){
        node *temp=new node(n);
        temp->next=head->next;
        head->next=temp;
        return;
    }
    insert(head,count+1,pos,n);
}
int main(){
    system("cls");
    vector<int> arr={2,4,6,8};
    node *head=create(arr,0);
    int place=2;
    int insert_val=50;
    print(head);
    insert(head,1,place,insert_val);
    print(head);
    return 0;
}