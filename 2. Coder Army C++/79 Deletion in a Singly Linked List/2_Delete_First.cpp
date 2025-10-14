// Delete First Node
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
node * create(vector<int> &arr,int index){
    if(index==arr.size()){
        cout<<endl;
        return NULL;
    }
    node *temp=new node(arr[index]);
    temp->next = create(arr,index+1);
    return temp;
}
void print(node *head){
    if(head==NULL){
        cout<<endl;
        return;
    }
    cout<<head->data<<" ";
    print(head->next);
}
int main(){
    system("cls");
    vector<int> arr={2,4,6,8};
    node *head = create(arr,0);
    print(head);

    // Deleting First Node
    if(head!=NULL){
        head=head->next;
    }
    print(head);
    return 0;
}