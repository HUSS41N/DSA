#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 8, 10, 10, 12, 19};
    int start = 0;
    int end = nums.size() - 1;
    int target = 5;
    int res = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(nums[mid]==target){
            return nums[mid];
        }
        if(nums[mid] < target){
            res = nums[mid];
            start = mid + 1;
        } else if (nums[mid] > target){
            end = mid-1;
        }
    }
    cout<<res;
}
