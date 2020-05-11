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

  public void deleteAtPosition(int position) {
    if (head == null) {
      System.out.println("List is empty");
      return;
    }
    Node temp = head;
    if (position == 0) {
      head = temp.next;
      return;
    }
    for (int i = 0; temp != null && i < position - 1; i++) {
      temp = temp.next;
    }
    if (temp == null || temp.next == null) {
      System.out.println("Invalid Position");
      return;
    }
    Node next = temp.next.next;
    temp.next = next;
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
    list.push(7);
    list.push(1);
    list.push(4);
    list.push(5);

    System.out.println("\nCreated Linked list is: ");
    list.print();
    System.out.println("After deleting key");
    list.deleteAtPosition(2);
    list.print();
  }
}
