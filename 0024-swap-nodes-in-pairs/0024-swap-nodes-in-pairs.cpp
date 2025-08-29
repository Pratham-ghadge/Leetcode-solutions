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
    ListNode* swapPairs(ListNode* head) {
         
         if(head && head -> next == nullptr)return head;

        ListNode * dummy = new ListNode(0);

     
        ListNode  *prev = dummy ;

        ListNode *curr = head;
         dummy -> next = curr;

        while(  curr != nullptr && curr -> next != nullptr ){

            ListNode *temp = curr -> next ->next;
            curr -> next ->next = curr;
            prev->next = curr -> next;
              curr -> next = temp;
              prev = curr;
              curr = curr -> next ;

        }

        return dummy -> next ;
        
    }
};