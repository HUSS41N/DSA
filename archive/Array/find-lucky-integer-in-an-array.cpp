class Solution {
public:
    int findLucky(vector<int>& arr) {
        int N = 501;
        int check[N];
        for(int i=0;i<N;i++){
            check[i] = 0;
        }
        for(int i=0;i<arr.size();i++){
            check[arr[i]] += 1;
        }
        int max_counter = INT_MIN;
        int current_counter = 0;
        for(int i=1;i<N;i++){
            if(check[i]==i){
                current_counter = i;
                max_counter = max(max_counter,current_counter);
            }
        }
        if(max_counter == INT_MIN){
            return -1;
        } 
        return max_counter;
    }
};
