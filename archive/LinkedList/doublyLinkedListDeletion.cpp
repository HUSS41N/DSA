#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node* prev;

        node(int value){
            data = value;
            next = NULL;
            prev = NULL;
        }
};
void deleteAtHead(node* &head){
    // head needs to be delted
    node* toDelete = head;
    // point the current head to next of th current 
    head = head->next;
    // new head previous will be null 
    head->prev = NULL;
    // delte
    delete toDelete;
}
void deletion(node* &head,int position){
    if(position==1){
        deleteAtHead(head);
    }
    node* temp = head;
    int counter = 1;
    while(temp!=NULL && counter!=position){
        counter++;
        temp = temp->next;
    }
    // point next of the previous of the found position to the next of temp; 
    temp->prev->next = temp->next;
    // temp k next ka jo previouus h usko temp k previous k barabr kr dene ka
    // if condition checks for if we deleting the last node 
    if(temp->next !=NULL){
    temp->next->prev = temp->prev;
    }
    // delte temp to avoid memory leak
    delete temp;
}
void insertAtHead(node* &head,int value){
    node* n = new node(value);
    n->next = head;
    if(head!=NULL){
        head->prev = n;
    }
    head = n;
}
void insertAtEnd(node* &head,int value){
    node* n = new node(value);
    if(head==NULL){
        insertAtHead(head,value);
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    node* head = NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    display(head);
    deletion(head,3);
    display(head);
    deleteAtHead(head);
    display(head);
}
