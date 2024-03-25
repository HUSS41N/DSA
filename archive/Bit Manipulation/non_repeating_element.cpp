// find the non repeating element in an array where every element repeat itself twice.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res = 0;
    for(int i=0;i<n;i++){
        res = res ^ arr[i];
    }
    cout<<res<<" ";
}
