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
// https://leetcode.com/problems/reverse-nodes-in-k-group/submissions/
void insertAtEnd(node* &head,int value){
    node* n = new node(value);
    if(head==NULL){
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
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reverseKNodes(node* &head,int k){
    node* current = head;
    node* previous = NULL;
    node* nextPtr;
    int counter = 0;
    while(current!=NULL && counter < k){
        nextPtr = current->next;
        current->next = previous;
        previous = current;
        current = nextPtr;
        counter++;
    }
    if(nextPtr!=NULL){
        int remaningLength = 0;
        node* temp = nextPtr;
        while(temp!=NULL){
            temp = temp->next;
            remaningLength++;
        }
        if(remaningLength >= k){
            head->next = reverseKNodes(nextPtr,k);
        } else {
            head->next = nextPtr;
        } 
    }
    return previous;
}
int main(){
    node* head = NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    // insertAtEnd(head,5);
    display(head);
    head = reverseKNodes(head,2);
    display(head);
}
