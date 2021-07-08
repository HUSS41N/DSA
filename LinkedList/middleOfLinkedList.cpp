#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
};
void insertAtHead(Node* &head,int val){
    Node* temp = head;
    Node* n = new Node(val);
    n->next = head;
    head = n;
}
void insertAtTail(Node* &head,int val){
    Node* temp = head;
    Node* newNode = new Node(val);
    if(head==NULL){
        newNode->next = head;
        head = newNode;
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
void middleOfTheList(Node* head){
    Node* temp = head;
    int size = 0;
    while(temp != NULL){
        size++;
        temp = temp->next;
    }
    temp = head;
    int middle = size/2;
    int counter = 1;
    while(temp->next != NULL){
        if(counter==middle){
            cout<<temp->data<<" ";
        }
        counter++;
        temp = temp->next;
    }
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,5);
    print(head);
    middleOfTheList(head);
}
