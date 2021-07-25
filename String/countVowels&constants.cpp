#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    cin>>s1;
    int count_vowels = 0;
    int count_constants = 0;
    for(char s: s1){
        s = tolower(s);
        if(s=='a' || s=='e' || s == 'i' || s == 'o' || s== 'u'){
            count_vowels += 1;
        } else {
            count_constants += 1;
        }
    }
    cout<<"Vowels :" << count_vowels<<endl;
    cout<<"Constants :"<<count_constants<<endl;
}
