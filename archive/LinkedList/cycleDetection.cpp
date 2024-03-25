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

bool detectCycle(node* head){
    node* slow = head;
    node* fast = head;
    while(fast!=NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
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
void makeCycle(node* &head,int k){
    int counter = 0;
    node* temp = head;
    node* startNode;
    while(temp->next !=NULL){
        if(counter == k){
            startNode = temp;
        }
        counter++;
        temp = temp->next;
    }
    temp->next = startNode;
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
    makeCycle(head,3);
    cout<<detectCycle(head);
    // display(head);
}
