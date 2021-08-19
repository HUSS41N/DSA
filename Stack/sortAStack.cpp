#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &stk,int top){
    if(stk.empty() || stk.top() <= top){
        stk.push(top);
        return;
    }
    int temp = stk.top();
    stk.pop();
    insert(stk,top);
    stk.push(temp);
}

void sort(stack<int> &stk){
    if(stk.empty()){
        return;
    }
    int top = stk.top();
    stk.pop();
    sort(stk);
    insert(stk,top);
}

void PrintStack(stack<int> s){
    if (s.empty())
        return;

    int x = s.top();
    s.pop();
    PrintStack(s);
    cout << x << " ";
    s.push(x);
}

int main(){
    stack<int> stk;
    stk.push(1);
    stk.push(4);
    stk.push(77);
    stk.push(2);
    stk.push(1);
    PrintStack(stk);
    sort(stk);
    cout<<endl;
    PrintStack(stk);
}
