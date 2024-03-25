#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s){
    // if it is a opening parathesis push it to stack
    stack<char> stk;
    char temp;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            stk.push(s[i]);
        }
        // if there is no opening parathesis means invalid 
        if(stk.empty()){
            return false;
        }
        // just check for closing paranthesis if the top most on the stack is opening of that otherwise return false
        switch (s[i])
        {
        case ')':
            temp = stk.top();
            stk.pop();
            if(temp == '{' || temp == '['){
                return false;
            }
            break;
        case ']':
            temp = stk.top();
            stk.pop();
            if(temp == '(' || temp == '{'){
                return false;
            }
            break;
        case '}':
            temp = stk.top();
            stk.pop();
            if(temp == '(' || temp == '['){
                return false;
            }
            break;
        }
    }
    return stk.empty();
}
int main(){
    string s = "([()])";
    if(isValid(s)){
        cout<<"Valid Paranthesis";
    } else {
        cout<<"Invalid Paranthesis";
    }
}
