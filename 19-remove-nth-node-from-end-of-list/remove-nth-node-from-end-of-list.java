/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        int len = 0;
        ListNode tmp = head;

        while(tmp != null){
            len++;
            tmp = tmp.next;
        }

        if(len == 1){
            return null;
        }

        int num = len-n;
        if(num == 0){
            ListNode newHead = head;
            head = newHead.next;
            newHead.next = null;

            return head;
        }
        
        tmp = head;
        ListNode prev = null;

        while(tmp != null && num > 0){
            prev = tmp;
            tmp = tmp.next;
            num--;
        }

        if(tmp != null){
            prev.next = tmp.next;
            tmp.next = null;
        }

        return head;
    }
}