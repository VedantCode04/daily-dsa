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
    void reverseListNode(ListNode*& head) {
        ListNode* ptr2 = head;
        ListNode* ptr1 = NULL;
        ListNode* ptr3 = ptr2->next;

        while (ptr2 != NULL) {
            ptr3 = ptr2->next;
            ptr2->next = ptr1;
            ptr1 = ptr2;
            ptr2 = ptr3;
        }

        head = ptr1;
    }

public:
    void reorderList(ListNode*& head) {
        if(head == NULL || head->next == NULL) return;
        ListNode *slow = head, *fast = head->next;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* middle = slow->next;
        slow->next = NULL;

        reverseListNode(middle);

        ListNode* t1 = middle, *t2 = head;
        ListNode* curr1 = head, *curr2 = middle;
        while (curr2 != NULL) {
            t1 = curr1->next;
            t2 = curr2->next;

            curr1->next = curr2;
            curr2->next = t1;
            curr1 = t1;
            curr2 = t2;
        }
    }
};
