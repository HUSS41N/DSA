#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string str = "Hello World";
    int counter = 0;
    int mx = 0;
    char maxF = 'a';
    for(int i=0;i<str.length();i++){
        counter = 0;
        for(int j=i;j<str.length();j++){
            if(str[i]==str[j]){
                counter++;
            }
        }
        if(counter>mx){
            mx = counter;
            maxF = str[i];
        }
    }
    cout<<mx<<" "<<maxF;
}
