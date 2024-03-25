#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int mask = 1 << k -1;
    n = n || k;
    if(n){
        cout<<1;
    }else {
        cout<<0;
    }
}
