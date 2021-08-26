
// 0(n2)
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if(arr[j]*2 == arr[i] and i != j and 0 <=i and j< arr.size()){
                    return true;
                }
            }
        }
        return false;
    }
};
