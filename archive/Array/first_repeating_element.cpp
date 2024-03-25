// o(n)
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
    const int N = 1e6+2;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i] = -1;
    }
    int min_index = INT_MAX;
    for(int i=0;i<n;i++){
        if(idx[arr[i]] != -1){
            min_index = min(min_index,idx[arr[i]]);
        } else {
            idx[arr[i]] = i;
        }
    }
    
    if(min_index==INT_MAX){
        cout<<-1<<endl;
    } else {
        cout<<min_index+1<<endl;
    }
}

// o(n)^2
#include <iostream>
using namespace std;
int search(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return i+1;
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
    cout<<search(arr,n);
}
