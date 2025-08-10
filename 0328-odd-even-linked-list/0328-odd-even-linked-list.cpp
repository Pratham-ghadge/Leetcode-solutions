class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* oddHead = head;
        ListNode* oddCurr = head;
        ListNode* evenHead = head->next;
        ListNode* evenCurr = head->next;

        while (evenCurr != nullptr && evenCurr->next != nullptr) {
            oddCurr->next = evenCurr->next;
            oddCurr = oddCurr->next;

            evenCurr->next = oddCurr->next;
            evenCurr = evenCurr->next;
        }

        oddCurr->next = evenHead; 

        return oddHead;
    }
};
