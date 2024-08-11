//lc 61
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
        if (head == NULL) return NULL;
        else if (head->next == NULL) return head;

        ListNode* tail, *temp = head;
        int size = 0;
        while (temp->next != NULL) {
            temp = temp->next;
            size++;
        }
        size++;
        tail = temp;

        k = k % size;
        if (k == 0) return head;
        cout << "k = " << k << endl;
        temp = head;
        for (int i = 0; i < size - k - 1; i++) {
            temp = temp->next;
        }

        tail->next = head;
        head = temp->next;
        temp->next = NULL;

        return head;
    }
};
