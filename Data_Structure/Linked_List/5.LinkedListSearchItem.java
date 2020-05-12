class Node {
  int data;
  Node next;

  Node(int d) {
    data = d;
    next = null;
  }
}

class LinkedList {
  Node head; // Head of list

  // Inserts a new node at the front of the list
  public void push(int new_data) {
    // Allocate new node and putting data
    Node new_node = new Node(new_data);

    // Make next of new node as head
    new_node.next = head;

    // Move the head to point to new Node
    head = new_node;
  }

  // Checks whether the value x is present in linked list
  public boolean search(Node head, int x) {
    Node current = head; // Initialize current
    while (current != null) {
      if (current.data == x)
        return true;
      current = current.next;
    }
    return false;
  }

  public static void main(String args[]) {

    LinkedList llist = new LinkedList();
    llist.push(10);
    llist.push(30);
    llist.push(11);
    llist.push(21);
    llist.push(14);

    if (llist.search(llist.head, 21))
      System.out.println("Yes");
    else
      System.out.println("No");
  }
}