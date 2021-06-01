#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_sum = INT_MIN;
    int start = 0;
    int end = 0;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            if(max_sum<sum){
                start = i;
                end = j;
                max_sum = sum;
            }
        }
    }
    cout<<max_sum<<endl;
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
}



