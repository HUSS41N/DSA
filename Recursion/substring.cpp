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
