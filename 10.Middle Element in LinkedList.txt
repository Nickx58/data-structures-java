package linkedlist;

class LinkedList {
    Node head;
    
    class Node {
        int data;
        Node next;
        
        Node(int data) {
            this.data = data;
            next = null;
        }
    }
    
    public void push(int data) {
        Node new_node = new Node(data);
        new_node.next = head;
        head = new_node;
    }
    public void printList() {
        Node n = head;
        while(n != null) {
            System.out.print(n.data+" ");
            n = n.next;
        }
    }
    public void getMiddle() {
        Node slow = head;
        Node fast = head;
        if(head != null) {
            while(fast !=null && fast.next != null) {
                fast = fast.next.next;
                slow = slow.next;
            }
            System.out.println("The Middle Element is "+slow.data);
        }
    }
    public static void main(String args[]) {
        LinkedList ll = new LinkedList();
        ll.push(2);
        ll.push(3);
        ll.push(4);
        ll.push(5);
        ll.printList();
        ll.getMiddle();
       
       
    }
}