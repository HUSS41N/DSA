#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n = s.length();
    int start = 0;
    int end = n-1;
    while(end>start){
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
    cout<<s;
}

// 2nd method 
#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n = s.length();
    string ns = "";
    for(int i=n-1;i>=0;i--){
        ns = ns+s[i];
    }
    cout<<ns;
}
