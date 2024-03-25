/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void insert(ListNode* &head,int val){
        ListNode* temp = head;
        ListNode* n = new ListNode(val);
        if(head==NULL){
            head = n;
            return;
        }
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
    }
    ListNode* partition(ListNode* head, int x) {
        ListNode* s = NULL;
        ListNode* l = NULL;
        ListNode* temp = head;
        if(head==NULL){
            return NULL;
        }
        if(head->next == NULL){
            return head;
        }
        while(temp!=NULL){
            if(temp->val < x){
                insert(s,temp->val);
            } else {
                insert(l,temp->val);
            }
            temp = temp->next;
        }
        if(s==NULL){
            return l;
        }
        temp = s;
        if(temp->next){
             while(temp->next != NULL){
            temp = temp->next;
        }
        }
      
        temp->next = l;
        return s;
    }
};
