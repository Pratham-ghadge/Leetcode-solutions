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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == nullptr || head -> next == nullptr) return head;

        if(k <= 0) return head;

        int count = 0;

        ListNode* curr = head;

        while (curr != nullptr) {
            count++;
            curr = curr -> next ;
        }

        if (k % count == 0) return head;
    
        k =  k % count;

        ListNode *slow = head ;
        ListNode *fast = head;

        for (int i = 0 ; i < k ; i++){
             fast = fast -> next ;
        }

        while( fast-> next != nullptr){
              slow = slow -> next ;
              fast = fast -> next;
        }

        curr = slow -> next ;
        slow -> next = nullptr;

        ListNode * temp = curr;

        while ( curr->next  != nullptr ){
            curr = curr -> next ;
        }

        curr -> next = head ;
        
        return temp ;
        


    }
};