#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node* &head,int val){
    Node* n = new Node(val);
    if(head==NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}


void printList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}



Node* removeKthNodeFromEnd(Node* &head,int k){
    int length = 0;
    Node* temp = head;
    while(temp!=NULL){
        length++;
        temp = temp->next;
    }
    temp = head;
    if(length==1){
        head = NULL;
        return NULL;
    }
    if(k==length){
        head = head->next;
        return head;
    }
    int counter = 0;
    while(counter != length - k - 1){
        counter++;
        temp = temp->next;
    }
    Node* toBeDeleted = temp->next;
    temp->next = temp->next->next;
    delete(toBeDeleted);
    return head;
}

int main(){
    Node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    // insertAtTail(head,3);
    // insertAtTail(head,4);
    // insertAtTail(head,5);
    removeKthNodeFromEnd(head,2);
    printList(head);
}
