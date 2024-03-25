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

class Queue{
    node* front;
    node* back;

    public:
        Queue(){
            front = NULL;
            back = NULL;
        }

    void push(int value){
        node* n = new node(value);
        if(front==NULL){
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back = n;
    }

    void pop(){
        if(front==NULL){
            cout<<"Queue is Empty"<<endl;
            return;
        }
        node* toBeDeleted = front;
        front = front->next;
        delete toBeDeleted;
    }

    int peek(){
        if(front == NULL){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return front->data;
    }

    bool isEmpty(){
        if(front == NULL){
            cout<<"Queue is Empty"<<endl;
            return true;
        }
        return false;
    }

};

int main(){
    Queue test;
    test.push(1);
    test.push(2);
    test.push(3);
    cout<<test.peek()<<endl;
    test.pop();
    test.pop();
    test.pop();
    test.pop();
}
