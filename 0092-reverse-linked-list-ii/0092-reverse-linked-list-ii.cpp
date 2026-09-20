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
        // vector<int> arr;
        // ListNode* temp =head;
        // int count = 0;
        // while(temp!=nullptr){
        //     count++;
        //     arr.push_back(temp->val);
        //     temp = temp->next;
        // }
        // left = left - 1;
        //     right = right - 1;
        // while(left <= right){
        //     int temp1 = arr[left];
        //     arr[left] = arr[right];
        //     arr[right] = temp1;
        //     left++;
        //     right--;
        // }ListNode* dummy = new ListNode();
        // ListNode* prev = dummy;
        // for (int i = 0; i<count; i++){
        //     prev->next = new ListNode(arr[i]);
        //     prev = prev->next;
        // }prev->next = nullptr;
        // return dummy->next;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        if(head==NULL || left == right) return head;
        for(int i=1;i<left;i++){
            prev = prev->next;
        }
        ListNode* curr = prev->next;
        for(int i=0;i<right - left;i++){
            ListNode* temp = curr->next;
            curr->next = temp->next;
            temp->next = prev->next;
            prev->next = temp;
        }
        return dummy->next;
    }
};