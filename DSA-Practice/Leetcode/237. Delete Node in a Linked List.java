class ListNode {
    int val;
    ListNode next;
    ListNode(int x) { val = x; }
}

class Solution {
    public void deleteNode(ListNode node) {
        node.val = node.next.val;
        ListNode x = node.next;
        node.next = node.next.next;
        x = null;
    }
}