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
    public static ListNode reverseList(ListNode head) {
        if(head.next == null) return head;
        ListNode x = reverseList(head.next);
        head.next.next = head;
        head.next = null;
        return x;
    }
    public static ListNode getOneBeforeMiddle(ListNode head){
        ListNode oneBeforeSlow = null;
        ListNode slow = head;
        ListNode fast = head;
        while(fast!=null&&fast.next!=null){
            oneBeforeSlow = slow; slow = slow.next;
            fast = fast.next.next;
        }
        return oneBeforeSlow;
    }
    public static boolean isPalindrome(ListNode head) {
        if(head.next == null) return true;
        ListNode oneBeforeMiddle = getOneBeforeMiddle(head);
        ListNode secondHalf = reverseList(oneBeforeMiddle.next);
        oneBeforeMiddle.next = null;
        while(head != null && secondHalf != null){
            if(head.val != secondHalf.val) return false;
            head = head.next; secondHalf = secondHalf.next;
        }
        return true;
    }
}