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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int count = 0;
        ListNode* curr = head;

   
        while (curr) {
            count++;
            curr = curr->next;
        }

        int partSize = count / k;
        int extra = count % k;

        vector<ListNode*> nodes(k, nullptr);
        curr = head;

        for (int i = 0; i < k && curr; i++) {
            nodes[i] = curr;
            int size = partSize + (i < extra ? 1 : 0);

            for (int j = 1; j < size; j++) {
                curr = curr->next;
            }

            ListNode* temp = curr->next;
            curr->next = nullptr;
            curr = temp;
        }

        return nodes;
    }
};
