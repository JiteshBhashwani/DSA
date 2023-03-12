
class ListNode {
    int val;
    ListNode next;
    ListNode(int x) {
        val = x;
        next = null;
    }
}

class Solution {
    public ListNode helper(ListNode head) {
        if(head == null || head.next == null) return null;
        ListNode fast = head, slow = head;
        while(fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
            if(fast == slow) return slow;
        }
        return null;
    }
    public ListNode detectCycle(ListNode head) {
        ListNode A = head;
        ListNode B = helper(head);
        if(B == null) return B;
        while(A != B){
            B = B.next;
            A = A.next;
        }
        return A;
     }
}
