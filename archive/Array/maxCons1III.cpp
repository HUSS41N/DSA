#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int ans = 0;
    int left = 0;
    int countZero = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            countZero++;
        } while(countZero>k){
            if(arr[left]==0){
                countZero--;
            }
            left++;
        }
        ans = max(ans,i-left+1);
    }
    cout<<ans;
}
