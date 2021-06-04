#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string str = "hello world";
    // to upper case we know there is difference of 32 ascii values between 'a' AND 'A'.
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] -= 32;
        }
    }
    cout<<str<<endl;
    
    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] += 32;
        }
    }
    cout<<str;
}
