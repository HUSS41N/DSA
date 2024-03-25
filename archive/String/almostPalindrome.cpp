#include <bits/stdc++.h>
using namespace std;

string reverse(string s){
    int start = 0;
    int end = s.length() - 1;
    while(start<=end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    return s;
}
int main(){
    string s= "abcdcaa";
    string temp = reverse(s);
    int counter = 0;
    for(int i=0;i<temp.length();i++){
        if(s[i] != temp[i]){
            counter++;
        }
    }
    cout<<counter;
}
