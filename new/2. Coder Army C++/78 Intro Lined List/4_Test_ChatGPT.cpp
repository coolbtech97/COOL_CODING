#include<iostream>
#include<vector>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int n) {
        data = n;
        next = NULL;
    }
};

void front(node* &head, int n) {
    node* temp = new node(n);
    temp->next = head;
    head = temp;
}

void print(node* head) {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    system("cls");
    node* head = NULL;
    vector<float> arr = {11.09,20,30,40,50,60};
    for(auto x : arr) {
        front(head, x);
    }

    print(head);
    return 0;
}
