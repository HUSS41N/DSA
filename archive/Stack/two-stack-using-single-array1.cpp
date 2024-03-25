#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

class Stack{
    int top1;
    int top2;
    public:
        int arr[MAX];

        Stack(){
            top1 = -1;
            top2 = (MAX/2) - 1; 
        }

        void push1(int val){
            if(top1 == (MAX/2) - 1){
                cout<<"Stack Overflow\n";
                return;
            }
            arr[++top1] = val;
        }

        void push2(int val){
            if(top2 == MAX - 1){
                cout<<"Stack Overflow\n";
                return;
            }
            arr[++top2] = val;
        }

        void pop1(){
            if(top1 == -1){
                cout<<"Stack is Empty\n";
                return;
            }
            top1--;
        }

        void pop2(){
            if(top2 == (MAX/2) - 1){
                cout<<"Stack is Empty\n";
                return;
            }
            top2--;
        }

        void peek1(){
            if(top1 == -1){
                cout<<"Stack is Empty\n";
                return;
            }
            cout<<arr[top1]<<endl;
        }

        void peek2(){
            if(top2 == (MAX/2) - 1){
                cout<<"Stack is Empty\n";
                return;
            }
            cout<<arr[top2]<<endl;
        }
};

int main(){
    Stack s;
    s.push1(1);
    s.push1(2);
    s.push1(3);
    s.push2(11);
    s.push2(22);
    s.push2(33);
    s.pop1();
    s.peek1();
    s.pop2();
    s.pop2();
    s.peek2();
}
