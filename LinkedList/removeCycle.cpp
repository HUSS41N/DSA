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

void removeCycle(node* &head){
    node* slow = head;
    node* fast = head;
    // do loop until the slow is equal to the fast intitally both are equal to do while
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow!=fast);
    // after loop just point one the slow or fast to head
    fast = head;
    // and now move one step at a time until both pointer next is equal
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    // just point the other one to the null and now we have a single linked list
    slow->next = NULL;
}
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
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    // display(head);
}
