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

node* recursiveMerge(node* &head1,node* &head2){
    // base case
    if(head1==NULL){
        return head2;
    } 
    if(head2==NULL){
        return head1;
    }
    node* result;
    if(head1->data < head2->data){
        // add it to result 
        result = head1;
        // call the function again for the nxt node of result by mving the used value(head1)
        result->next = recursiveMerge(head1->next,head2);
    } else {
        result = head2;
        result->next = recursiveMerge(head1,head2->next);
    }
    return result;
}

node* merge(node* &head1,node* &head2){
    // both pointer for 2 lists
    node* p1 = head1;
    node* p2 = head2;
    // dummy head to make a new list
    node* dummyHead = new node(-1);
    // dummy ptr
    node* p3 = dummyHead;
    // simple merging process
    while(p1!=NULL && p2!=NULL){
        if(p1->data < p2->data){
            p3->next = p1;
            p1 = p1->next;
        } else {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    // if theres' is left over in a p1
    while(p1!=NULL){
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    // if theres' is left over in a p2
    while(p2!=NULL){
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    // return the new linked list next because first is -1;
    return dummyHead->next;
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
    node* head1 = NULL;
    insertAtEnd(head1,1);
    insertAtEnd(head1,2);
    insertAtEnd(head1,3);
    insertAtEnd(head1,4);
    insertAtEnd(head1,5);
    insertAtEnd(head1,6);
    node* head2 = NULL;
    insertAtEnd(head2,1);
    insertAtEnd(head2,2);
    insertAtEnd(head2,3);
    insertAtEnd(head2,4);
    insertAtEnd(head2,5);
    insertAtEnd(head2,6);
    display(head1);
    display(head2);
    node* newHead = merge(head1,head2);
    display(newHead);
}
