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
// making pop costly
#include <bits/stdc++.h>
using namespace std;

class Stack{
    int stack_size;
    queue<int> q1;
    queue<int> q2;

    public:
        Stack(){
            stack_size = 0;
        }
        
        void push(int value){
            // we are making pop costly 
            // just push the value to q1;
            q1.push(value);
            stack_size++;
        }

        void pop(){
            if(q1.empty()){
                cout<<"Queue is empty"<<endl;
                return;
            }
            // copy the values to q2 but leave one value
            while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
            }
            // delete the left element 
            q1.pop();
            stack_size--;
            
            // swap the name of both queue so q2 is empty again 
            queue<int> temp;
            temp = q1;
            q1 = q2;
            q2 = temp; 
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
    test.pop();
    test.pop();
    test.pop();
    test.pop();
    test.pop();
}
