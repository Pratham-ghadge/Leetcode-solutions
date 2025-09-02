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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* curr = &dummy;

        for (int i = 1; i < left; i++) {
            curr = curr->next;
        }
        ListNode* prevlist = curr;
        ListNode* start = curr->next;

        curr = start;
        for (int i = left; i < right; i++) {
            curr = curr->next;
        }
        ListNode* nextlist = curr->next;

        ListNode* prev = nextlist;
        ListNode* node = start;
        while (node != nextlist) {
            ListNode* nextn = node->next;
            node->next = prev;
            prev = node;
            node = nextn;
        }

        prevlist->next = prev;

        return dummy.next;
    }
};
