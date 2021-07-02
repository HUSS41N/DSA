#include <bits/stdc++.h>
using namespace std;

// making push operation costly
class Stack{
    queue<int> q1;
    queue<int> q2;
    int stack_size;
    
    public:
        Stack(){
            stack_size = 0;
        }

        void push(int value){
            stack_size++;
            // push the value in empty q1
            q1.push(value);
            // copy all the values from the other queue to the q1s
            while(!q2.empty()){
                q1.push(q2.front());
                q2.pop();
            }
            // swap the names of the two queues;
            // so we will have the q1 empty again and our values moved to q2
            queue<int> temp;
            q2 = temp;
            q2 = q1;
            q1 = temp;
        }
        void pop(){
            // q2 will have our values after the swapping in push
            if(q2.empty()){
                cout<<"Stack Underflow"<<endl;
                return;
            }
            q2.pop();
            stack_size--;
        }
        int top(){
            if(q2.empty()){
                cout<<"Stack is Empty"<<endl;
                return -1;
            }
            return q2.front();
        }
        int size(){
            return stack_size;
        }
};
int main(){
    Stack test;
    test.push(1);
    test.push(2);
    test.push(3);
    cout<<test.size()<<endl;
    cout<<test.top()<<endl;
    test.pop();
    test.pop();
    test.pop();
    test.pop();
}
