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
node* removeElements(node* head, int val) {
        
        if(head==NULL){
            return head;
        }
        node* temp = head;
        while(head != NULL && head->data == val){
            head = head->next;
        }
        while(temp->next != NULL){
            if(temp->next->data == val){
                temp->next = temp->next->next;
            } else {
             temp = temp->next;   
            }
        }
        if(temp->data == val){
            return NULL;
        }
        
        return head;
    }
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
    insertAtTail(head,1);
    insertAtTail(head,2);
    head = removeElements(head,1);
    displayNode(head);
}
