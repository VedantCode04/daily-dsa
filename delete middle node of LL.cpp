//lc 2095

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(NULLptr) {}
 *     ListNode(int x) : val(x), next(NULLptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode*& head) {
        // to handle edge cases where there is no or only one element
        if(head == NULL || head->next == NULL) return NULL;
        ListNode *slow = head, *fast = head->next, *temp = NULL;

        while (fast->next != NULL && fast->next->next != NULL) {
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        temp = slow->next;
        slow->next = temp->next;
        return head;
    }
};
