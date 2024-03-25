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
    node* n = new node(value);
    n->next = head;
    head = n;
}
void insertAtEnd(node* &head,int value){
    node* n = new node(value);
    if(head==NULL){
        insertAtBegining(head,value);
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head,int target){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data==target){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int main(){
    node* head = NULL;
    insertAtBegining(head,1);
    insertAtBegining(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,5);
    cout<<search(head,5)<<endl;
    display(head);
}
