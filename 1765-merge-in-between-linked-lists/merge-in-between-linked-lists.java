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
    public ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {
        ListNode tmp = list1;
        int count = 1;

        while(count != a){
            count++;
            tmp = tmp.next;
        }

        ListNode join = tmp;
        count--;

        int diff = b - count + 1;
        while(diff > 0){
            tmp = tmp.next;
            diff--;
        }

        join.next = list2;
        ListNode tmp2 = list2;

        while(tmp2.next != null){
            tmp2 = tmp2.next;
        }

        tmp2.next = tmp;
        return list1;
    }
}