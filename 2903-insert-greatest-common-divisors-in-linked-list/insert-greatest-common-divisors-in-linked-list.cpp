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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *ptr = head;
        while(ptr != NULL){
            ListNode *sec = ptr->next;
            if(sec != NULL){
                int a = gcd(ptr->val, sec->val);
                ListNode *node = new ListNode(a);
                ptr->next = node;
                node->next = sec;
            }
            else{
                break;
            }
            ptr = sec;
        }

        return head;
    }
};