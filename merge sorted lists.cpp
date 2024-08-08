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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        ListNode* p1 = list1, *p2 = list2;
        ListNode* dummyNode = new ListNode();
        ListNode* temp = dummyNode;
        while(p1 != NULL && p2 != NULL){
            int data1 = p1->val, data2 = p2->val;
            if(data1 > data2){
                temp->next = p2;
                temp = p2;
                p2 = p2->next;
            } else {
                temp->next = p1;
                temp = p1;
                p1 = p1->next;
            }
        }

        if(p1 == NULL){
            temp->next = p2;
        } else if (p2 == NULL){
            temp->next = p1;
        }

        return dummyNode->next;
    }
};

// //lc 21
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
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         if(list1 == NULL) return list2;
//         if(list2 == NULL) return list1;
//         ListNode *newHead = NULL, *temp = NULL, *temp2 = NULL;
//         ListNode *ptr1 = list1, *ptr2 = list2;

//         while (ptr1 != NULL && ptr2 != NULL) {
//             int listval1 = ptr1->val;
//             int listval2 = ptr2->val;
//             if (listval1 > listval2) {
//                 temp2 = temp;
//                 temp = new ListNode(listval2);
//                 if (newHead == NULL) {
//                     newHead = temp;
//                     temp2 = temp;
//                 }
//                 temp2->next = temp;
//                 ptr2 = ptr2->next;
//             } else {
//                 temp2 = temp;
//                 temp = new ListNode(listval1);
//                 if (temp2 != NULL) {
//                     temp2->next = temp;
//                 }
//                 if (newHead == NULL) {
//                     newHead = temp;
//                     temp2 = temp;
//                 }
//                 temp2->next = temp;
//                 ptr1 = ptr1->next;
//             }
//         }

//         while (ptr1 != NULL) {
//             int listval1 = ptr1->val;
//             temp2 = temp;
//             temp = new ListNode(listval1);
//             if (newHead == NULL) {
//                 newHead = temp;
//                 temp2 = temp;
//             }
//             temp2->next = temp;
//             ptr1 = ptr1->next;
//         }

//         while (ptr2 != NULL) {
//             int listval2 = ptr2->val;
//             temp2 = temp;
//             temp = new ListNode(listval2);
//             if (newHead == NULL) {
//                 newHead = temp;
//                 temp2 = temp;
//             }
//             temp2->next = temp;
//             ptr2 = ptr2->next;
//         }

//         return newHead;
//     }
// };
