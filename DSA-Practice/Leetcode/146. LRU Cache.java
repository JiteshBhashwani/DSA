import java.util.*;;
class LRUCache {
    static class Node{
        int key,data;
        Node prev,next;
        Node(int key,int data){
            prev = next = null;
            this.key = key;
            this.data = data;
        }
    }
    Node oneAboveAll = new Node(-1,420), head, tail;
    int cap;
    int size;
    HashMap<Integer,Node> hashMap;
    public LRUCache(int capacity) {
        head = tail = null;
        size = 0;
        cap = capacity;
        hashMap = new HashMap<>();
    }
    private void addInTop(int key, int value){
        Node node = new Node(key,value); size++;
        if(head == null){
            head = tail = node;
        }
        else{
            node.next = head;
            head.prev = node;
            head = head.prev;
        }
        oneAboveAll.next = head;
        head.prev = oneAboveAll;
        hashMap.put(key,head);
    }
    private void moveToTop(int key){
        //this assumes the key provided is already present in cache
        Node node = hashMap.get(key);
        if(node == head) return;
        if(node == tail) tail = tail.prev;
        node.prev.next = node.next;
        if(node.next != null) node.next.prev = node.prev;

        head.prev = node;
        node.next = head;

        oneAboveAll.next = node;
        node.prev = oneAboveAll;
        head = head.prev;

        hashMap.replace(key,hashMap.get(key),head);
    }
    private void deleteTail(){
        hashMap.remove(tail.key);
        tail.prev.next = null; size--;
        if(head == tail) tail = head = null;
        else tail = tail.prev;
    }
    public int get(int key) {
        if(!hashMap.containsKey(key)) return -1;
        int data = hashMap.get(key).data;
        moveToTop(key);
        return data;
    }
    public void put(int key, int value) {
        if(!hashMap.containsKey(key)) {
            addInTop(key,value);
            if(size > cap) deleteTail();
            return;
        }
        hashMap.get(key).data = value;
        moveToTop(key);
    }
}

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */