class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string one =  "";
        string two = "";
        for(auto word : word1){
            one += word;
        }
        for(auto word : word2){
            two += word;
        }
        if(one==two){
            return true;
        }
        return false;
    }
};
