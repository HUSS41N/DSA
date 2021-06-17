class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res;
        int counter = 0;
        for(int i=0;i<nums.size();i++){
            counter = 0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j]){
                    counter++;
                }
            }
            res.push_back(counter);
        }
        return res;
    }
};
