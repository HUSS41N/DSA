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

// wihtout array
void swapNodes(Node* &head,int k){
    int length = 0;
    Node* temp = head;
    while(temp!=NULL){
        length++;
        temp = temp->next;
    }
    Node* first;
    Node* second;
    int counter = 0;
    temp = head;
    while(temp!=NULL){
        if(counter == k - 1 ){
            first = temp;
        }
        if(counter == length - k){
            second = temp;
        }
        counter++;
        temp = temp->next;
    }
    swap(first->data,second->data);
}
// with array
void swapNodes(Node* &head,int k){
    vector<int> arr;
    Node* temp = head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    int n = arr.size();
    swap(arr[k-1],arr[n-k]);
    temp = head;
    int i = 0;
    while(temp!=NULL){
        temp->data = arr[i++];
        temp = temp->next;
    }
}
int main(){
    Node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    // insertAtTail(head,4);
    // insertAtTail(head,5);
    swapNodes(head,2);
    printList(head);
}
