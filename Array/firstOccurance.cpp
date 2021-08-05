#include <bits/stdc++.h>
using namespace std;
// using bs log n solution

int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while(start<=end){
        int mid = start + ((end - start ) / 2);
        if(nums[mid] == target){
            ans = mid;
            end = mid - 1;
        } else if (nums[mid] >  target){
            end = mid - 1;
        } else{
            start = mid + 1;
        }
    }
    cout<<ans;
}
