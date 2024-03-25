#include <bits/stdc++.h>
using namespace std;

void totalDigitsInNumber(int num,int &ans){
    if(num==0){
        return;
    }
    ans++;
    totalDigitsInNumber(num/10,ans);
}
int main(){
    int num = 2371998;
    int ans = 0;
    totalDigitsInNumber(num,ans);
    cout<<ans;
}
