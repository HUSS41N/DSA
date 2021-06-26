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

void insertAtHead(node* &head,int data){
    node* n = new node(data);
    // next of new node is head 
    n->next = head;
    // to make it a circular list we point the n back to itself
    n->next = n;
    head = n;
}
void insertAtEnd(node* &head,int data){
    node* n = new node(data);
    // if the list is empty insert at head and return;
    if(head==NULL){
        insertAtHead(head,data);
        return;
    }
    node* temp = head;
    // rather than cheking till null we check if they point to head to make a circular list
    while(temp->next != head){
        temp=temp->next;
    }
    // append last node
    temp->next = n;
    // point the pointer of the last node to head to make cirlce
    n->next = head;
}
void display(node* head){
    node* temp = head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head);
    cout<<endl;
}
// this display function may crash your system
void DisplayCircle(node* head){
    node* temp = head;
    while(temp->next != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    node* head = NULL;
    insertAtHead(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    display(head);
}
