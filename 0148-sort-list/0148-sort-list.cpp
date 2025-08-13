class Solution {
public:
    // Merge two sorted linked lists
    ListNode* merge(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;

        if (l1->val <= l2->val) {
            l1->next = merge(l1->next, l2);
            return l1;
        } else {
            l2->next = merge(l1, l2->next);
            return l2;
        }
    }

    // Find the middle node
    ListNode* getMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next; // fast ahead to split properly
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head; // base case

        // Step 1: Split into halves
        ListNode* mid = getMiddle(head);
        ListNode* rightHead = mid->next;
        mid->next = nullptr; // break the list

        // Step 2: Sort each half
        ListNode* leftSorted = sortList(head);
        ListNode* rightSorted = sortList(rightHead);

        // Step 3: Merge sorted halves
        return merge(leftSorted, rightSorted);
    }
};
