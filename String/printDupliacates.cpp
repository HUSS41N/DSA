#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_map<char,int> dict;
    for(int i=0;i<s.size();i++){
        dict[s[i]] += 1; 
    }
    for(auto c: dict){
           if(c.second > 1){
               cout<< c.first<<" ";
           }
    }
}
