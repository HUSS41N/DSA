// https://leetcode.com/problems/length-of-last-word/submissions/
class Solution {
public:
    int lengthOfLastWord(string s) {
        int counter = 0;
        bool flag = false;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
                flag = true;
                counter++;
            } else {
                if(flag==true){
                    return counter;
                }
            }
        }
        return counter;
    }
};
