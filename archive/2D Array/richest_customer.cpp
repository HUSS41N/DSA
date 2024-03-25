// leetcode 1672
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = INT_MIN;
        int current_max = 0;
        for(int i=0;i<accounts.size();i++){
            current_max = 0;
            for(int j=0;j<accounts[i].size();j++){
                current_max += accounts[i][j];
            }
            max_wealth = max(max_wealth,current_max);
        }
        return max_wealth;
    }
};
