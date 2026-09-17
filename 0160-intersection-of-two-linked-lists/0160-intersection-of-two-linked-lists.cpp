/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int count1 = 0;
        int count2 = 0;
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        while(temp1!=nullptr){
            count1++;
            temp1 = temp1->next;
        }while(temp2!=nullptr){
            count2++;
            temp2 = temp2->next;
        }int diff = abs(count1 - count2);
        temp1 = headA;
        temp2 = headB;
        if(count2>count1){
            while(diff>0){
                temp2 = temp2->next;
                diff--;
            }
        }else if(count2<count1){
            while(diff>0){
                temp1 = temp1->next;
                diff--;
            }
        }
        while(temp1!=nullptr && temp2!=nullptr){
            if(temp1 == temp2){
                return temp2;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }return NULL;
    }
};