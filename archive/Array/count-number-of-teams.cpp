class Solution {
public:
    int numTeams(vector<int>& arr) {
        int counter = 0;
        for(int i=1;i<arr.size()-1;i++){
            int incLeft = 0; int incRight = 0; int decLeft = 0; int decRight = 0;
            for(int j=0;j<arr.size();j++){
                if(j<i){
                    if(arr[j]<arr[i]){
                        incLeft++;
                    } else {
                        decLeft++;
                    }
                }
                if(i<j){
                    if(arr[j]>arr[i]){
                        incRight++;
                    } else {
                        decRight++;
                    }
                }
            }
            counter += (incLeft*incRight) + (decLeft*decRight);
        }
        return counter;
    }
};
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
