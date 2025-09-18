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

    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>vec;

        while(head){
            int cval = head -> val;
            ListNode *temp = head;
            while(temp){
                if(temp->val > cval){
                    cval = temp->val;
                    break;
                }
                temp = temp->next;
            }

            if(head->val < cval){
                vec.push_back(cval);
            }else{
                vec.push_back(0);
            }
            head = head->next;
        }
        
        return vec;
    }
};