#include <iostream>
using namespace std;

string moveAllX(string s){
    if(s.length()==0){
        return "";
    }
    char firstChar = s[0];
    string rest = moveAllX(s.substr(1));
    if(firstChar=='x'){
        return rest + firstChar;
    }
    return firstChar+rest;
}
int main(){
    cout<<moveAllX("xtremexforce");
}
