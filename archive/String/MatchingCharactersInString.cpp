#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<char,int> dict;
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    for(char c: s1){
        dict[c] += 1;
    }
    int count = 0;
    for(char c: s2){
        if(dict.find(c) == dict.end()){
            continue;
        } else {
            count++;
        }
    }
    cout<<count;
}
