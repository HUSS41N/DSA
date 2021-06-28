#include <iostream>
#include <stack>
using namespace std;

void reverseASentence(string s)
{
    string word = "";
    stack<string> stk;
    for (int i = 0; i < s.length(); i++)
    {   
        if (s[i] != ' ')
        {
            word = word + s[i];
        }
        else if(s[i]==' '){
            stk.push(word);
            word = "";
        }
    }
    // for the last word of the sentence
    // reason is our if condition will never execute as we dont have any space in last word---"example"
    stk.push(word);
    while(!stk.empty()){
        cout<<stk.top()<<" ";
        stk.pop();
    }
    cout<<endl;
}
int main(){
    string s = "Hello world";
    reverseASentence(s);
}
