// o(n)2
#include <iostream>
#include <limits.h>
using namespace std;
int find(int arr[],int n){
    int sum;
    cin>>sum;
    for(int i=0;i<n;i++){
        int subarray_sum = 0;
        for(int j=i;j<n;j++){
            subarray_sum += arr[j];
            if(subarray_sum==sum){
                cout<<i+1<<" "<<j+1;
                return 0;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    find(arr,n);
}
