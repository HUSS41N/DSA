class Solution {
public:
    bool numberOfDigits(int num){
        int counter=0;
        while(0<num){
            num /= 10;
            counter++;
        }
        if(counter%2==0){
            return true;
        } else {
            return false;
        }
    }
    int findNumbers(vector<int>& nums) {
        int counter = 0;
        for(int i=0;i<nums.size();i++){
            if(numberOfDigits(nums[i])){
                counter++;
            }
        }
        return counter;
    }
};
