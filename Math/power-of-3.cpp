class Solution {
public:
    bool isPowerOfThree(int n) {
        long long res = 1;
        while(res<=n){
            if(res==n){
                return true;
            }
            res = res*3;
        }
        return false;
    }
};
