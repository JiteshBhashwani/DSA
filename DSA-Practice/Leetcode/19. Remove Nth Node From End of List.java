// public class 19. Remove Nth Node From End of List {
    
// }
class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

class Solution {
    public static int getSizeOfLinkedList(ListNode head){
        int count = 0;
        while(head != null){
            count = count + 1;
            head = head.next;
        }
        return count;
    }
    public static ListNode deleteIthElement(ListNode head, int i){
        if (i == 0) return head.next;
        ListNode a = null;
        ListNode b = head;
        int j = 0;
        while (j < i) {
            a = b;
            b = b.next;
            j = j + 1;
        }
        a.next = b.next;
        return head;
    }
    public static ListNode removeNthFromEnd(ListNode head, int n) {
        int size = getSizeOfLinkedList(head);
        return deleteIthElement(head, size - n);
    }
}