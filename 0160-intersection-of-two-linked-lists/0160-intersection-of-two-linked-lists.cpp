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

    ListNode* collisonpt(ListNode* headA, ListNode* headB, int diff){

        while(diff--){
            headB = headB->next;
        }

        while(headA != NULL && headB != NULL){

            if(headA == headB){
                return headA;
            }

            headA = headA->next;
            headB = headB->next;
        }

        return NULL;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        ListNode* t1 = headA;
        ListNode* t2 = headB;
        int n1=0;
        int n2=0;

        while(t1 != NULL){
            n1++;
            t1 = t1->next;
        }

        while(t2 != NULL){
            n2++;
            t2 = t2->next;
        }

        if(n1 < n2)
            return collisonpt(headA, headB, n2-n1);
        else
            return collisonpt(headB, headA, n1-n2);
    }
};