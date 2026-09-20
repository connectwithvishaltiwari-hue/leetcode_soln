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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> arr;
        ListNode* temp =head;
        int count = 0;
        while(temp!=nullptr){
            count++;
            arr.push_back(temp->val);
            temp = temp->next;
        }
        left = left - 1;
        right = right - 1;
        while(left <= right){
            int temp1 = arr[left];
            arr[left] = arr[right];
            arr[right] = temp1;
            left++;
            right--;
        }ListNode* dummy = new ListNode();
        ListNode* prev = dummy;
        for (int i = 0; i<count; i++){
            prev->next = new ListNode(arr[i]);
            prev = prev->next;
        }prev->next = nullptr;
        return dummy->next;
    }
};