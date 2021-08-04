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

void insertAtTail(node* &head,int value){
    node* n = new node(value);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void displayNode(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

node* moveLastNodeToFront(node* &head){
    node* temp = head;
    if(temp == NULL){
        return NULL;
    }
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    node* newHead = temp->next;
    temp->next = NULL;
    newHead->next = head;
    return newHead;
}
int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    head = moveLastNodeToFront(head);
    displayNode(head);
}
