#include <bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/expression-contains-redundant-bracket-not/
int main(){
    string s;
    cin>>s;
    stack<char> stk;
    bool ans = false;
    // approach 
    // 1. if it is operator or opening bracket push it to stack (skip the numbers or characters)
    // 2. if it is a closing bracket remove all the continous operators from stack and one opeinging bracket
    // 3. if the top of the stack is opening bracket we have a redudnt bracket
    for(auto ch : s){
        if(ch=='+' or ch=='-' or ch == '*' or ch=='/' or ch=='('){
            stk.push(ch);
        }  else if (ch == ')'){
            if(stk.top() == '('){
                ans = true;
            }
            while(stk.top()=='+' or stk.top()=='-' or stk.top() == '*' or stk.top()=='/'){
                stk.pop();
            }
            stk.pop();
        }
    }
    cout<<ans;
}
