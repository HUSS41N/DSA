#include <iostream>
#include <limits.h>
using namespace std;
int kadane(int arr[],int n){
    int current_sum = 0;
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++){
        current_sum+= arr[i];
        if(current_sum<0){
            current_sum = 0;
        }
        max_sum = max(max_sum,current_sum);
    }
    return max_sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int nonwrapsum = kadane(arr,n);
    int total_sum = 0;
    for(int i=0;i<n;i++){
        total_sum+=arr[i];
        arr[i] = arr[i] * -1;
    }
    
    int wrapsum = total_sum + kadane(arr,n);
    cout<<max(wrapsum,nonwrapsum);
}



