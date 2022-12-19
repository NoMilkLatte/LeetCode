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
        int i = 0, sum = 0, sum1 = 0, j = 0;
        sum = l1->val + l2->val + j;
        // ListNode l3 = ListNode(sum);
        // ListNode head = l3;
        if(sum >= 10){
            j = 1;
            sum = sum - 10;
        }else{
            j = 0;
        }
        ListNode* l3 = new ListNode(sum);
        ListNode* head = l3;
        l1 = l1->next;
        l2 = l2->next;
        while(l1 != NULL && l2 != NULL){
            sum = l1->val + l2->val + j;
            if(sum >= 10){
                j = 1;
                sum = sum - 10;
            }else{
                j = 0;
            }
            l3->next = new ListNode(sum);
            l3 = l3->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1 != NULL){
            sum = l1->val + j;
            if(sum >= 10){
                j = 1;
                sum = sum - 10;
            }else{
                j = 0;
            }
            l3->next = new ListNode(sum);
            l3 = l3->next;
            l1 = l1->next;
        }
        while(l2 != NULL){
            sum = l2->val + j;
            if(sum >= 10){
                j = 1;
                sum = sum - 10;
            }else{
                j = 0;
            }
            l3->next = new ListNode(sum);
            l3 = l3->next;
            l2 = l2->next;
        }
        if(j != 0){
            l3->next = new ListNode(1);
        }
        return head;
    }
};


// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode* dummyHead = new ListNode(0);
//         ListNode* curr = dummyHead;
//         int carry = 0;
//         while (l1 != NULL || l2 != NULL || carry != 0) {
//             int x = l1 ? l1->val : 0;
//             int y = l2 ? l2->val : 0;
//             int sum = carry + x + y;
//             carry = sum / 10;
//             curr->next = new ListNode(sum % 10);
//             curr = curr->next;
//             l1 = l1 ? l1->next : nullptr;
//             l2 = l2 ? l2->next : nullptr;
//         }
//         return dummyHead->next;
//     }
// };
