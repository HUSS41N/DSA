#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int value){
            data = value;
            next = NULL;
        }
};

void insertAtBegining(node* &head,int value){
    // create a new node
    node* n = new node(value);
    // just point the pointer of the new node to the head node
    n->next = head;
    // and make the new node the new head
    head=n;
}

void display(node* head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head = NULL;
    insertAtBegining(head,3);
    insertAtBegining(head,2);
    insertAtBegining(head,1);
    display(head);
}
