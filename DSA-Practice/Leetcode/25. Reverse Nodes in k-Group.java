class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

class Solution {
    public static ListNode reverseList(ListNode head) {
        if(head.next == null) return head;
        ListNode x = reverseList(head.next);
        head.next.next = head;
        head.next = null;
        return x;
    }
    public ListNode reverseKGroup(ListNode head, int k) {
        if(head == null || head.next == null || k == 1) return head;
        ListNode p1 = head, p2 = head;
        int i = k;
        while(i-->1){
            if(p2.next == null) return head;
            p2 = p2.next;
        }
        ListNode done = reverseKGroup(p2.next, k);
        p2.next = null;
        head = reverseList(p1);
        p1.next = done;
        return head;
    }
}