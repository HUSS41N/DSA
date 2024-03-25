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

node* reverseKNodes(node* &head,int k){
    // first just reverse the first k node itertavily 
    node* current = head;
    node* previous = NULL;
    node* nextPointer;
    int counter = 0;
    while(current!=NULL && counter<k){
        nextPointer = current->next;
        current->next = previous;
        previous = current;
        current = nextPointer;
        counter++;
    }
    // point the pointer of head to the rest of nodes ot join them back
    if(nextPointer!=NULL){
        head->next = reverseKNodes(nextPointer,k);
    }
    // return our new head;
    return previous;
}
void insertAtEnd(node* &head,int value){
    node* n = new node(value);
    if(head==NULL){
        n->next = head;
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;          
}
void display(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
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
    head = reverseKNodes(head,2);
    display(head);
}
