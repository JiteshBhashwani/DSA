
// Definition for a Node.
class Node {
    int val;
    Node next;
    Node random;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}

class Solution {

    public Node copyRandomList(Node head) {
        if(head == null) return null;
        // if(head.next == null){
        //     Node answer = new Node(head.val);
        //     answer.random = head.random;
        //     return answer;
        // }
        Node p, f = head;
        while(f != null){
            p = f;
            f = f.next;
            p.next = new Node(p.val);
            p.next.next = f;
        }
        p = head;
        while(p != null && p.next != null){
            p.next.random = p.random == null? null:p.random.next;
            p = p.next.next;
        }
        Node answer = new Node(420);
        p = answer;
        Node itr = head;
        while(itr != null){
            answer.next = itr.next;
            itr.next = itr.next.next;
            answer = answer.next;
            itr = itr.next;
        }
        return p.next;
    }
}