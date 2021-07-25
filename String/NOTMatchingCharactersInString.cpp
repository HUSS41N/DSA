#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<char,int> dict;
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
   for(char w: s1){
       dict[w] += 1;
   }
   int count = 0;
   for(char w: s2){
       if(dict.find(w) == dict.end()){
           cout<<w<<" ";
           count++;
       }
   }
   cout<<count;
}
