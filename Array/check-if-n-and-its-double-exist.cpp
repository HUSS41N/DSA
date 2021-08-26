class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i=0;i<arr.size();i++){
             if(mp.find(arr[i] * 2) != mp.end()){
                 return true;
             }
             if(arr[i] % 2 == 0 && mp.find(arr[i]/2) != mp.end()){
                 return true;
             }

            mp[arr[i]]++;
        }
        return false;
    }
};
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
