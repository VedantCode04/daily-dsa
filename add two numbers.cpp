//lc 2

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* newHead = new ListNode(-1), *curr = newHead;
        ListNode* t1 = l1, *t2 = l2;
        int carry = 0 ;
        while(t1 != NULL && t2 != NULL){
            long long sum = long(t1->val) + long(t2->val);
            sum = sum + carry;
            if(sum < 10){
                ListNode* temp = new ListNode(sum);
                curr->next = temp;
                curr = temp;
                carry = 0;
            } else {
                carry = 1;
                ListNode* temp = new ListNode(sum%10);
                curr->next = temp;
                curr = temp;
            }

            t1 = t1->next;
            t2 = t2->next;
        }

        while(t1 != NULL){
            long long sum = long(t1->val) + carry;

            if(sum < 10){
                ListNode* temp = new ListNode(sum);
                curr->next = temp;
                curr = temp;
                carry = 0;
            }else {
                carry = 1;
                ListNode* temp = new ListNode(sum%10);
                curr->next = temp;
                curr = temp;
            }

            t1 = t1->next;
        }

        while(t2 != NULL){
            long long sum = long(t2->val) + carry;

            if(sum < 10){
                ListNode* temp = new ListNode(sum);
                curr->next = temp;
                curr = temp;
                carry = 0;
            }else {
                carry = 1;
                ListNode* temp = new ListNode(sum%10);
                curr->next = temp;
                curr = temp;
            }

            t2 = t2->next;
        }

        if(carry == 1){
            ListNode* temp = new ListNode(1);
            curr->next = temp;
            curr = temp;
        }

        return newHead->next;
    }
};
