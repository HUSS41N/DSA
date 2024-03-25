#include <iostream>
#include <stack>
using namespace std;

class Queue{
    stack<int> s1;
    stack<int> s2;

    public:
    // pushing or enqueue in our queue will be in o(1)
        void push(int value){
            s1.push(value);
        }

        int pop(){
            while (s1.empty() && s2.empty()){
                cout<<"Queue is Empty"<<endl;
                return -1;
            }
            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            int top = s2.top();
            s2.pop();
            return top;
        }
        bool isEmpty(){
             if(s1.empty() and s2.empty()){
                cout<<"Queue is Empty"<<endl;
                return true;
            }
            return false;
        }
};

int main(){
    Queue test;
    test.push(4);
    test.push(1);
    test.push(2);
    test.push(3);
    test.push(4);
    cout<<test.pop()<<endl;
    cout<<test.pop()<<endl;
    cout<<test.pop()<<endl;
    cout<<test.isEmpty();
}
