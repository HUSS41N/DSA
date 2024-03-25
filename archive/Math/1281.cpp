class Solution {
public:
    int subtractProductAndSum(int n) {
        int orignalNum = n;
        int product = 1;
        int sum = 0;
        while(0<n){
            int lastDigit = n % 10;
            product *= lastDigit;
            sum += lastDigit;
            n /= 10;
        }
        return product - sum;
    }
};
