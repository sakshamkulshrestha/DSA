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
        List<Integer> v = new ArrayList<>();
        ListNode tmp = head;

        while(tmp != null){
            v.add(tmp.val);
            tmp = tmp.next;
        }

        int maxSum = 0;
        int st = 0;
        int end = v.size() - 1;

        while(st <= end){
            int sum = v.get(st) + v.get(end);
            maxSum = Math.max(sum, maxSum);

            st++; end--;
        }

        return maxSum;
    }
}