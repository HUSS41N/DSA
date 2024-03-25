#include <bits/stdc++.h>
using namespace std;

// easy approch
stack<int> reverseStack(stack<int> s){
    stack<int> newS;
    while(s.empty() == false){
        int top = s.top();
        s.pop();
        newS.push(top);
    }
    return newS;
}

void reverseUtil(stack<int> &s,int e){
    if(s.empty()){
        s.push(e);
        return;
    }
    int top = s.top();
    s.pop();
    reverseUtil(s,e);
    s.push(top);    
}
void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int top = s.top();
    s.pop();
    reverse(s);
    reverseUtil(s,top);
}
void display(stack<int> s){
    if(s.empty()){
        return;
    }
    int top = s.top();
    s.pop();
    display(s);
    cout<<top<<" ";
    s.push(top);
}
int main(){
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.push(6);
    display(stk);
    reverse(stk);
    cout<<endl;
    display(stk);
}
