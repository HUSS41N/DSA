#include <bits/stdc++.h>
using namespace std;

void printSubsets(string input,string output){
    if(input.length() == 0){
        cout<<output<<" ";
        return;
    }
    string output1 = output;
    string output2 = output;
    output2.push_back(input[0]);
    printSubsets(input.substr(1),output1);
    printSubsets(input.substr(1),output2);
}
int main(){
    string input = "ABC";
    string output = "";
    printSubsets(input,output);
}

#include <iostream>
using namespace std;

void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans << endl;
        return;
    }
    char ch = s[0];
    string rest = s.substr(1);
    subseq(rest,ans);
    subseq(rest,ans+ch);
}
int main(){
    subseq("ABC","");
}
