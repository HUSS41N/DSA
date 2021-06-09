class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0;
        int max_count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                counter=0;
            } else {
                counter++;
                max_count = max(counter,max_count);
            }
        }
        return max_count;
    }
};
