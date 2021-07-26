#include<bits/stdc++.h>
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
void insertion(Node* &head,int val){
    Node* n = new Node(val);
    if(head==NULL){
        n->next = head;
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void print(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

// naive approach
// make array from linked list
// remove duplicates from array
// make LL from array
Node* removeDuplicates(Node* head){
    vector<int> arr;
    vector<int> res;
    Node* temp = head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    sort(arr.begin(),arr.end());
    for(int i=1;i<arr.size();i++){
        if(arr[i-1]==arr[i]){
            res.push_back(arr[i]);
        }
    }
    Node* newHead = NULL;
    for(auto num: res){
        insertion(newHead,num);
    }
    return newHead;
}
int main(){
    Node* head = NULL;
    insertion(head,3);
    insertion(head,3);
    insertion(head,1);
    insertion(head,1);
    insertion(head,2);
    insertion(head,2);
    print(head);
    head  = removeDuplicates(head);
    print(head);
}
