class LRUCache {
    class Node{
        int key;
        int value;
        Node prev;
        Node next;

        Node(int key, int value){
            this.key = key;
            this.value = value;
        }
    }

    HashMap<Integer, Node> map = new HashMap<>();
    Node head;
    Node tail;
    int n;

    public LRUCache(int capacity) {
        n = capacity;
        head = new Node(0, 0);
        tail = new Node(0, 0);
        head.next = tail;
        tail.prev = head;
    }

    public int get(int key) {
        Node tmp = map.get(key);
        if(tmp == null) return -1;

        tmp.prev.next = tmp.next;
        tmp.next.prev = tmp.prev;

        tmp.next = tail;
        tmp.prev = tail.prev;
        tail.prev.next = tmp;
        tail.prev = tmp;

        return tmp.value;
    }

    public void put(int key, int value) {
        Node tmp = map.get(key);

        if(tmp != null){
            tmp.value = value;

            tmp.prev.next = tmp.next;
            tmp.next.prev = tmp.prev;

            tmp.next = tail;
            tmp.prev = tail.prev;
            tail.prev.next = tmp;
            tail.prev = tmp;
            return;
        }

        if(map.size() == n){
            Node lru = head.next;
            lru.prev.next = lru.next;
            lru.next.prev = lru.prev;
            map.remove(lru.key);
        }

        Node newNode = new Node(key, value);
        newNode.next = tail;
        newNode.prev = tail.prev;
        tail.prev.next = newNode;
        tail.prev = newNode;
        map.put(key, newNode);

        return;
    }
}