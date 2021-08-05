#include <bits/stdc++.h>
using namespace std;

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
    int left = 0;
    int right = n -1;
    while(left<right){
        int mid = left + (right-left) / 2;
        if(nums[mid] == target){
            cout<<mid;
            return mid;
        } else if(nums[mid] > target){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    cout<<-1;
    return -1;
}
