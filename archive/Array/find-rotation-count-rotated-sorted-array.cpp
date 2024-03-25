#include <bits/stdc++.h>
using namespace std;

int bs(vector<int> &nums,int n){
    // find the minimum value and itds index is the number of rotation
    int start = 0;
    int end = n- 1;
    while(start<=end){
        int mid=start+(end-start)/2;
        int next = (mid + 1)%n;
        int prev = (mid - 1 + n )%n;
        // min value has a special condition its smaller than both of its neighbour
        if(nums[mid]<=nums[next] && nums[mid]<=nums[prev]){
            return n-mid;
        } else if (nums[mid]>=nums[start]){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {5,6,1,2,3,4};
    int n = nums.size();
    cout<<bs(nums,n);
}
