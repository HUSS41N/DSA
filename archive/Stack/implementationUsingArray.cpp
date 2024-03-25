#include <iostream>
using namespace std;

// define size of stack
#define MAX 1000

class Stack{
    // top will work as the pointer which always points to top of stack
    int top;
    public:
        int arr[MAX];
    
    Stack(){
        // initialize top with -1
        top = -1;
    }

    void push(int data){
        if(top==MAX-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        // increment top and add the value to stack
        top++;
        arr[top] = data;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return;
        }
        // decrement top and top will change the current value of stack
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        return top == -1;
    }
};

int main(){
    Stack test;
    test.push(1);
    test.push(2);
    test.push(3);
    test.push(4);
    cout<<test.Top()<<endl;
    test.pop();
    cout<<test.Top()<<endl;
    test.pop();   
    test.pop();   
    test.pop();
    test.pop();
    cout<<test.isEmpty()<<endl;   
}
