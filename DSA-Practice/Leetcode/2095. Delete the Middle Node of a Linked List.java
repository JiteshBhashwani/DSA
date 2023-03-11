class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode p1 = head,p2 = head;
        while(p2 != null && p2.next != null){
            p1 = p1.next;
            p2 = p2.next;
            p2 = p2.next;
        }
        return p1;
    }
    public static void deleteNode(ListNode node) {
        node.val = node.next.val;
        node.next = node.next.next;
    }
    public ListNode deleteMiddle(ListNode head) {
        if(head.next == null) return null;
        if(head.next.next == null) head.next = null;
        else deleteNode(middleNode(head));
        return head;
    }
}