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
    ListNode* mergeNodes(ListNode* head) {
       ListNode *tmp = head->next;
       ListNode *str = head;
       ListNode *main = head;

       bool f = true;
       int a = 0;

       while(tmp != NULL){
        if(tmp -> val == 0){
            ListNode *node = new ListNode(a);
            if(f){
                str = node;
                main = node;
                f = false;
            }
            else{
                str->next = node;
                str = str->next;
            }
            

            a = 0;
        }

        a += tmp->val;
        tmp = tmp->next;
       }

        return main;
    }
};