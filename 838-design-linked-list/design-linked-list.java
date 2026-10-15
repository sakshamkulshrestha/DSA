
class Node{
    int val;
    Node next;

    Node(int a){
        val = a;
        next = null;
    }
};

class MyLinkedList {

    Node head;

    public MyLinkedList() {
        head = null;
    }
    
    public int get(int index) {
        if(index < 0) return -1;

        Node tmp = head;
        while(tmp != null && index-- > 0){
            tmp = tmp.next;
        }

        if(tmp == null) return -1;

        return tmp.val;
    }
    
    public void addAtHead(int val) {
        Node newNode = new Node(val);
        newNode.next = head;
        head = newNode;
    }
    
    public void addAtTail(int val) {
        Node newNode = new Node(val);

        if(head == null){
            head = newNode;
            return;
        }

        Node tmp = head;
        while(tmp.next != null){
            tmp = tmp.next;
        }

        tmp.next = newNode;
    }
    
    public void addAtIndex(int index, int val) {
        if(index < 0) return;

        if(index == 0){
            addAtHead(val);
            return;
        }

        Node tmp = head;
        while(tmp != null && index > 1){
            tmp = tmp.next;
            index--;
        }

        if(tmp == null) return;

        Node newNode = new Node(val);
        newNode.next = tmp.next;
        tmp.next = newNode;
    }
    
    public void deleteAtIndex(int index) {
        if(index < 0 || head == null) return;

        if(index == 0){
            head = head.next;
            return;
        }

        Node tmp = head;
        while(tmp != null && index > 1){
            tmp = tmp.next;
            index--;
        }

        if(tmp == null || tmp.next == null) return;

        Node newNode = tmp.next;
        tmp.next = newNode.next;
        newNode.next = null;
    }
}

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */