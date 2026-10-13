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
import java.math.BigInteger;
import java.util.ArrayList;

class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        BigInteger n1 = BigInteger.ZERO;
        ListNode tmp = l1;
        BigInteger place = BigInteger.ONE;

        while(tmp != null){
            n1 = n1.add(place.multiply(BigInteger.valueOf(tmp.val)));
            place = place.multiply(BigInteger.TEN);
            tmp = tmp.next;
        }

        BigInteger n2 = BigInteger.ZERO;
        tmp = l2;
        place = BigInteger.ONE;

        while(tmp != null){
            n2 = n2.add(place.multiply(BigInteger.valueOf(tmp.val)));
            place = place.multiply(BigInteger.TEN);
            tmp = tmp.next;
        }

        BigInteger total = n1.add(n2);
        ArrayList<Integer> v = new ArrayList<>();
        while(total.compareTo(BigInteger.ZERO) > 0){
            v.add(total.mod(BigInteger.TEN).intValue());
            total = total.divide(BigInteger.TEN);
        }

        if(v.isEmpty()){
            return new ListNode(0);
        }

        ListNode head = new ListNode(v.get(0));
        ListNode cur = head;
        int idx = 1;

        while(idx < v.size()){
            ListNode node = new ListNode(v.get(idx));
            cur.next = node;
            cur = node;
            idx++;
        }

        return head;
    }
}