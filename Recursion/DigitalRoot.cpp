#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/digital-rootrepeated-digital-sum-given-integer/
void DigitalRoot(int num,int &sum){
    if(num==0){
        return;
    }
    sum += num % 10;
    DigitalRoot(num/10,sum);
}
int DigitalRootMain(int num){
    int sum = 0;
    int ans = 0;
    DigitalRoot(num,sum);
    DigitalRoot(sum,ans);
    return ans;
}
int main(){
    int ans = DigitalRootMain(5674);
    cout<<ans;
}
