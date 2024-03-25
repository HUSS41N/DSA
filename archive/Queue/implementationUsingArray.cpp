#include <iostream>
using namespace std;

#define MAX 1000

class Queue{
    // we need two pointers in queue
    // front will remove and peek element
    // back will add element
    int front; 
    int back; 
    public:
        int arr[MAX];
    
    Queue(){
        front = -1;
        back = -1;
    }

    void push(int data){
        // check if the queue is already full
        if(back==MAX-1){
            cout<<"Queue overflow"<<endl;
            return;
        }
        back++;
        arr[back] = data;
        // we intisialsed front with -1 so after adding we move it to first index of queue.
        if(front == -1){
            front++;
        }
    }

    void pop(){
        // check if queue is empty
        if(front == -1 || front > back){
            cout<<"Queue is Empty"<<endl;
            return;
        }
        front++;
    }

    int peek(){
         // check if queue is empty
        if(front == -1 || front > back){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool isEmpty(){
        if(front == -1 || front > back){
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
    test.push(4);
    cout<<test.peek()<<endl;
    test.pop();
    cout<<test.peek()<<endl;
    test.pop();
    test.pop();
    test.pop();
    test.pop();
}
