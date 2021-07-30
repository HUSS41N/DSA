class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> res;
        ListNode* temp = head;
        if(head->next == NULL){
            return true;
        }
        while(temp!= NULL){
            res.push_back(temp->val);
            temp = temp->next;
            
        }
        vector<int> com;
        for(int i=res.size()-1;i>=0;i--){
            com.push_back(res[i]);
        }
        if(res==com){
            return true;
        }
        return false;
    }
};
