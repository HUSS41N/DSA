class Solution {
public:
    bool selfDiv(int num){
    int orignalNum = num;
    while(num>0){
        int lastDigit = num % 10;
        if(lastDigit==0){
            return false;
        }
        if(orignalNum % lastDigit > 0){
            return false;
        }
        num /= 10;
    }
    return true;
}
    vector<int> selfDividingNumbers(int left, int right) {
         vector<int> res;
        for(int i=left;i<=right;i++){
        if(selfDiv(i)){
            res.push_back(i);
        }
    }
        return res;
    }
};
