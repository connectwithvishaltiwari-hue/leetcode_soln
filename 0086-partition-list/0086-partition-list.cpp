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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = head;
        ListNode* d1 = new ListNode();
        ListNode* prev1 = d1;
        ListNode* d2 = new ListNode();
        ListNode* prev2 = d2;
        while(temp!=nullptr){
            if(temp->val < x){
                prev1->next = temp;
                prev1 = prev1->next;
            }else if (temp->val >=x){
                prev2->next = temp;
                prev2 = prev2->next;
            }temp = temp->next;
        }prev2->next = nullptr;
        prev1->next = d2->next;
        // ListNode* newHead = d1->next;
        // delete d1;
        // delete d2;
        return d1->next;

    }
};