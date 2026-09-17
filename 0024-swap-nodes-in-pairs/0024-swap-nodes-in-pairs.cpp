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
    ListNode* swapPairs(ListNode* head) {

        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* temp = head;
        ListNode* next = head->next;
        while (temp != nullptr && next != nullptr) {
            prev->next = temp->next;
            temp->next = next->next;
            next->next = temp;
            prev = temp;
            temp = temp->next;
            if (temp != nullptr) {
                next = temp->next;
            }
        }
        return dummy->next;
    }
};