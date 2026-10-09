class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *write = head;
        ListNode *read = head->next;
        int sum = 0;

        while(read != NULL){
            if (read->val == 0){
                read->val = sum;
                write->next = read;
                write = read;
                sum = 0;
            } 
            else{
                sum += read->val;
            }
            read = read->next;
        }

        write->next = nullptr;
        ListNode *newHead = head->next;
        write->next = nullptr;
        return head->next;
    }
};