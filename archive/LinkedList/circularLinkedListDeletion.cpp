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
void deleteAtHead(node* &head){
    node* temp = head;
    // find the last element so we keep the circlular format by pointing the last elemt to next of head(new head)
    while(temp->next != head){
        temp = temp->next;
    }
    node* toBeDelted = head;
    // pointing the last element to next element of head
    temp->next = head->next;
    // new head will be next of head
    head = head->next;
    delete toBeDelted;
}
void deletion(node* &head,int pos){
    if(pos == 1){
        deleteAtHead(head);
    }
    int counter = 1;
    node* temp = head;
    // loop till pos - 1 the previous of what needs to be dleted
    while(counter != pos-1){
        counter++;
        temp = temp->next;
    }
    node* toBeDelted = temp->next;
    // point the previous element next to the next of next of the previous
    // by doing so we break the link of previos and what need to be dleted
    temp->next = temp->next->next;
    delete toBeDelted;
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

int main(){
    node* head = NULL;
    insertAtHead(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    display(head);
    deletion(head,3);
    deleteAtHead(head);
    display(head);
}
