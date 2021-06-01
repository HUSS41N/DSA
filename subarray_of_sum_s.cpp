#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int n,s;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,j=0,start = -1,end = -1,sum = 0;
    while(j<n && sum + arr[j] <= s){
        sum += arr[j];
        j++;
        if(sum == s){
            cout<<i+1<<" "<<j+1<<endl;
            return 0;
        }
    }
    while(j<n){
        sum += arr[j];
        while(sum>s){
            sum -= arr[i];
            i++;
        }
        if(sum==s){
            start = i + 1;
            end = j + 1;
            break;
        }
          j++;
    }
  cout<<start<<" "<<end<<endl;
}

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
