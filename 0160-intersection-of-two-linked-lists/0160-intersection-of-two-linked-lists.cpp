/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        vector<ListNode*>mp;

        ListNode *temp1 = headA ;

        while(temp1){
            mp.push_back(temp1);
            temp1 = temp1 ->next;

        }

        ListNode *temp2 = headB;

        while(temp2){

            auto it = find(mp.begin(),mp.end(),temp2);

            if( it !=  mp.end()){
               return temp2;
            }
            temp2 = temp2 -> next;
        }
        
        return nullptr;
    }
};