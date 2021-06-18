// o(n^3)
class Solution {
public:
    int numTeams(vector<int>& arr) {
        int counter = 0;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                for(int k=j+1;k<arr.size();k++){
                    if((arr[i]<arr[j] && arr[j]<arr[k]) || (arr[i]>arr[j] && arr[j]>arr[k])){
                        counter++;
                    }
                }
            }
        }
        return counter;
    }
};
