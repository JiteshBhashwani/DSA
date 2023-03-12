class ListNode {
    int val;
    ListNode next;
    ListNode(int x) {
        val = x;
        next = null;
    }
}
class Solution {
    public int length(ListNode head){
        int ans = 0;
        while (head != null) {
            head = head.next; ans++;
        }
        return ans;
    }
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        if(headA == headB) return headA;
        int lenA = length(headA);
        int lenB = length(headB);
        while (lenA - lenB > 0) {
            headA = headA.next;
            lenA--;
        }
        while (lenB - lenA > 0) {
            headB = headB.next;
            lenB--;
        } 
        while(headA!=null && headB!=null) {
            if(headA == headB) return headA;
            headA = headA.next;
            headB = headB.next;
        }
        return null;
    }
}