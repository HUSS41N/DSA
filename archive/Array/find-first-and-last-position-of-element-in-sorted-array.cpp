class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                res.push_back(i);
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==target){
                res.push_back(i);
                break;
            }
        }
        if(res.size()==0){
            return {-1,-1};
        }
        return res;
    }
};
