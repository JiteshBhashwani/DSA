
class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

class Solution {
    public ListNode removeElements(ListNode head, int val) {
        while(head != null && head.val == val) head = head.next;
        if(head == null || head.next == null) return head;
        ListNode itr = head;
        while(itr != null && itr.next != null){
            while(itr.next != null && itr.next.val == val){
                itr.next = itr.next.next;
            }
            itr = itr.next;
        }
        return head;
    }
}