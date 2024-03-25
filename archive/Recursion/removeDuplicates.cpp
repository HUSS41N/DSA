#include <iostream>
using namespace std;

string removeDuplicates(string s){
    if(s.length()==0){
        return "";
    }
    char firstChar = s[0];
    string ans = removeDuplicates(s.substr(1));
    if(firstChar==ans[0]){
        return ans;
    } else {
        return firstChar + ans;
    }
}
int main(){
    cout<<removeDuplicates("aaabbbbccccddddeeee");
}
