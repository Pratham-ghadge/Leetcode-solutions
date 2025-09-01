// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {

//         ListNode* curr = head;
//         ListNode* returnhead = nullptr;

//         while (curr != nullptr && curr->next != nullptr) {

//             ListNode* start = curr;

//             for (int i = 0; i < k; i++) {

//                 if (curr->next != nullptr) {
//                     curr = curr->next;
//                 } else {
//                     return returnhead;
//                 }
//             }

//             // curr = curr->next;

//             ListNode* prev = curr;

//             while (start != curr) {
//                 ListNode* nextl = start->next;
//                 start->next = prev;
//                 prev = start;
//                 start = nextl;
//             }

//             if (returnhead == nullptr) {
//                 returnhead = prev;
//             }
//         }

//         return returnhead;
//     }
// };




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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;

        ListNode dummy(0);
        dummy.next = head;

        ListNode* prevGroupEnd = &dummy;
        ListNode* curr = head;

        while (true) {
           
            ListNode* node = curr;
            for (int i = 0; i < k; i++) {
                if (!node) return dummy.next; 
                node = node->next;
            }

           
            ListNode* groupStart = curr;
            ListNode* prev = node; 
            for (int i = 0; i < k; i++) {
                ListNode* nextl = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nextl;
            }

           
            prevGroupEnd->next = prev;
            prevGroupEnd = groupStart;
        }

        return dummy.next;
    }
};
