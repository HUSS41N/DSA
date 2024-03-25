// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = INT_MIN;
        int start = 0;
        int end = nums.size()-1;
        while(start<end){
            int sum = nums[start] + nums[end];
            start++;
            end--;
            ans = max(ans,sum);
        }
        return ans;
     }
};
