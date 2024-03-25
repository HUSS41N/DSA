#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    cin>>s1;
    char search;
    cin>>search;
    int count  = 0;
    for(auto c: s1){
        if(c==search){
            count++;
        }
    }
    cout<<count;
}
