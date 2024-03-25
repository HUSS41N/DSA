#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node* prev;

        node(int value){
            data = value;
            next = NULL;
            prev = NULL;
        }
};
void insertAtHead(node* &head,int value){
    // create a new node
    node* n = new node(value);
    // point the next of newly created node to head
    n->next = head;
    // edge case for empty list we wont have a prev of head
    if(head!=NULL){
        // point the previous of the head to n 
        head->prev = n;
    }
    // assign new head
    head = n;
}
void insertAtEnd(node* &head,int value){
    node* n = new node(value);
    // if the head is empty just insert at the head and return
    if(head==NULL){
        insertAtHead(head,value);
        return;
    }
    node* temp = head;
    // iretate till the last node
    while(temp->next != NULL){
        temp = temp->next;
    }
    // point the next of the last to the n(newly created node )
    temp->next = n;
    // and previos of the n(newly created node ) to last node;
    n->prev = temp;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    node* head = NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    insertAtHead(head,0);
    display(head);
}
