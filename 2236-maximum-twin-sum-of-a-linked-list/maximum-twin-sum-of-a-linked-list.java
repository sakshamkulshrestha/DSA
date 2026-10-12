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
    public int pairSum(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;

        while(fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;
        }

        ListNode mid = slow;
        ListNode tmp = head;

        while(tmp.next != mid){
            tmp = tmp.next;
        }
        tmp.next = null;
        
        ListNode curr = mid;
        ListNode prev = null;
        ListNode next = null;

        while(curr != null){
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }

        ListNode a = head;
        ListNode b = prev;

        int maxSum = 0;
        while(a != null && b != null){
            int sum = a.val + b.val;
            maxSum = Math.max(sum, maxSum);

            a = a.next; b = b.next;
        }

        return maxSum;
    }
}