#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    // enter a sorted array (SORTED)
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    // fix the first element and question reduces to two sum
    for(int i=0;i<n;i++){
        int low = i+1;
        int high = n-1;
        while(low<high){
            if(arr[i]+arr[low]+arr[high] == sum){
                cout<<i<<" "<<low<<" "<<high<<endl;
                cout<<"YES"<<endl;
                return 0; 
            } else if(arr[i]+arr[low]+arr[high] > sum){
                high--;
            } else {
                low++;
            }
        }
    }
    cout<<"NO";
}
