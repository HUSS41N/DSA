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

Node* top = NULL;

void push(int val){
    Node* n = new Node(val);
    if(!n){
        cout<<"Heap overflow\n";
        return;
    }
    n->next = top;
    top = n;
}

int peek(){
    if(top==NULL){
        cout<<"Stack is Empty\n";
        return -1;
    }
    return top->data;
}

void pop(){
    if(top==NULL){
        cout<<"Stack is Empty\n";
        return;
    }
    Node* temp = top;
    top = top->next;
    free(temp);
}

bool isEmpty(){
    if(top==NULL){
        return true;
    }
    return false;
}

int main(){
    push(1);
    push(2);
    push(3);
    cout<<peek();
    pop();
    cout<<peek();
}
