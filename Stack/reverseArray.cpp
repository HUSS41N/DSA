#include <iostream>
#include <stack>
using namespace std;

void reverse(int arr[],int n){
    stack <int> stk;
    for(int i=0;i<n;i++){
        stk.push(arr[i]);
    }
    while(!stk.empty()){
        cout<<stk.top()<<" ";
        stk.pop();
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
}
