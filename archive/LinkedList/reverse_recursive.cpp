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

node* reverse(node* &head){
    node* current = head;
    node* previous = NULL;
    node* nextPointer;
    while(current!=NULL){
        // store the value of next of the current 
        nextPointer = current->next;
        // point the pointer of the current to its previous node
        // intital value of previous is null because after reversing list our first will be last and last points to the null
        current->next = previous;
        // move the previous pointer by one
        previous= current;
        // move the current pointer to the next value
        current = nextPointer;
    }
    // after the loop our last previous will be the first element
    return previous; 
}

node* recursiveReverse(node* &head){
    if(head==NULL || head->next == NULL){
        return head;
    }
    node* newHead  = recursiveReverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}
void insertAtEnd(node* &head,int value){
    node* n = new node(value);
    if(head==NULL){
        n->next = head;
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
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
    insertAtEnd(head,3);
    insertAtEnd(head,2);
    insertAtEnd(head,1);
    display(head);
    head = reverse(head);
    display(head);
    head = recursiveReverse(head);
    display(head);
}
