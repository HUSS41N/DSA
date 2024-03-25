// leetcode 485
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx = 0;
        int counter = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                counter = 0;
            } else {
                counter++;
                mx = max(mx,counter);
            }
        }
        return mx;
    }
};
