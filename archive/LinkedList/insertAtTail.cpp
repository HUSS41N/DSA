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
    node* n = new node(value); // create new node
    if(head==NULL){
        // if head == null means linkedlist is empty so we can just insert the node at the first position 
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        // till we wind the node whole next variable is null
        // pointing our temp to next node
        temp = temp->next;
    }
    // null last node being found after the while loop so we insert at the temp
    temp->next = n;
}
// without using a temp variable
// void insertAtTail(node* &head,int value){
//     node* n = new node(value);
//     if(head==NULL){
//         head = n;
//         return;
//     }
//     while(head->next!=NULL){
//         head->next = head->next->next;
//     }
//     head->next = n;
// }

void displayNode(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head = NULL;
    insertAtTail(head,0);
    insertAtTail(head,1);
    displayNode(head);
}
