//lc 234

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
    bool isPalindrome(ListNode* head) {
        if (head->next == NULL)
            return true;

        ListNode *fast = head->next, *slow = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* middle = slow->next;

        //reverseing the list from middle
        ListNode* ptr2 = middle, *ptr1 = NULL, *ptr3 = ptr2->next;

        while (ptr2 != NULL) {
            ptr3 = ptr2->next;
            ptr2->next = ptr1;
            ptr1 = ptr2;
            ptr2 = ptr3;
        }
        slow->next = ptr1;
        middle = ptr1;

        //now compare the list vals start == middle, if they are NOT same, return false;
        ListNode *p2 = middle, *p1 = head;
        while(p1 != middle && p2 != NULL){
            if(p1->val != p2->val) return false;
            p1 = p1->next;
            p2 = p2->next;
        }

        return true;
    }
};
