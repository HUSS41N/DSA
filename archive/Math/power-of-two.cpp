class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long res = 1;
        if(n==1){
            return true;
        }
        while(res<=n){
            if(res==n){
                return true;
            }
            res = res*2;
        }
        return false;
    }
};
