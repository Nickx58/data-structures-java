public class Main {
  Node head; // head of the linked List

  class Node {
    int data;
    Node next;

    Node(int new_data) {
      data = new_data;
      next = null;
    }
  }

  public void push(int newData) {
    Node newNode = new Node(newData);
    newNode.next = head;
    head = newNode;
  }

  public void append(int new_data) {
    Node new_node = new Node(new_data);

    if (head == null) {
      head = new Node(new_data);
      return;
    }
    new_node.next = null;
    Node last = head;
    while (last.next != null) {
      last = last.next;
    }
    last.next = new_node;
    return;
  }

  public void insertAfter(Node prev_node, int new_data) {
    if (prev_node == null) {
      System.out.println("The given previous node cannot be null");
      return;
    }

    Node new_node = new Node(new_data);
    new_node.next = prev_node.next;
    prev_node.next = new_node;
  }

  public void print() {
    Node n = head;
    while (n != null) {
      System.out.print(n.data + " ");
      n = n.next;
    }
    System.out.println();
  }

  public static void main(String[] args) {
    var list = new Main();
    list.append(6);
    list.push(7);
    list.push(1);
    list.append(4);
    list.insertAfter(list.head.next, 8);

    System.out.println("\nCreated Linked list is: ");
    list.print();
  }
}