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

void deleteFirstNode(node* &head){
    // if we have only one node in your linked list we dont even need to know the value we want to delete
    // just store the value of what to be deleted and move the pointer to the next(NULL)
    // and use the delete operator to delete the node to avoid memory leaking
    node* toBeDeleted = head;
    head = head->next;
    delete toBeDeleted;
}
void deleteNode(node* &head,int value){
    // if we have empty linked list just return;
    if(head==NULL){
        return;
    }
    // if we have only one element in our linked list just use the deletefirstNode function and return
    if(head->next==NULL){
        deleteFirstNode(head);
        return;
    }
    node* temp = head;
    // find the prior element of what node to be dleted 
    while(temp->next->data!=value){
        temp = temp->next;
    }
    // after finding the n-1th element mark it to be deleted 
    node* toBeDeleted = temp->next;
    // we just move the pointer to the next element of what need to be delted basically skip the node we wanted to delted
    temp->next = temp->next->next;
    // delte the marked node to avoid memory leaking
    delete toBeDeleted;
}
void insertAtEnd(node* &head,int value){
    node* n = new node(value);
    if(head==NULL){
        n->next = head;
        head = n;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtStart(node* &head,int value){
    node* n = new node(value);
    n->next = head;
    head = n;
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
    insertAtStart(head,1);
    insertAtStart(head,2);
    insertAtEnd(head,3);
    deleteFirstNode(head);
    deleteNode(head,3);
    display(head);
}
