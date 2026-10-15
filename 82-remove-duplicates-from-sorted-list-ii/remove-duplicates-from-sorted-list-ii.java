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
    public ListNode deleteDuplicates(ListNode head) {
        if(head == null || head.next == null){
            return head;
        }

        ListNode dummy = new ListNode(0, head);
        ListNode first = dummy;
        ListNode second = head;

        while(second != null){
            if(second.next != null && second.val == second.next.val){
                while(second.next != null && second.val == second.next.val){
                    second = second.next;
                }
                first.next = second.next;
            }
            else{
                first = second;
            }
            second = second.next;
        }

        return dummy.next;
    }
}