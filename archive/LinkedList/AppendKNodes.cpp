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

int lengthOfList(node* &head){
    int counter  = 0;
    node* temp = head;
    while(temp!=NULL){
        counter++;
        temp = temp->next;
    }
    return counter;
}

node* appendKNodes(node* &head,int k){
    node* newHead;
    node* newTail;
    node* tail = head;
    int l = lengthOfList(head);
    // just in case k is bigger than the length
    k = k % l;
    int counter = 1;
    while(tail->next!=NULL){
        if(counter==l-k){
            newTail = tail;
        }
        if(counter==l-k+1){
            newHead = tail;
        }
        tail = tail->next;
        counter++;
    }
    newTail->next = NULL;
    tail->next = head;
    return newHead;
}

void insertAtEnd(node* &head,int value){
    node* n = new node(value);
    if(head==NULL){
        n->next = NULL;
        head = n;
        return;
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

int main(){
    node* head = NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    insertAtEnd(head,6);
    head = appendKNodes(head,3);
    display(head);
}
