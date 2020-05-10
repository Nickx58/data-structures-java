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

  public void deleteKey(int key) {
    Node temp = head;
    if (temp != null && temp.data == key) {
      head = temp.next;
      return;
    }
    Node prev = null;
    while (temp != null && temp.data != key) {
      prev = temp;
      temp = temp.next;
    }
    if (temp == null)
      return;
    prev.next = temp.next;
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
    list.deleteKey(5);
    list.print();
  }
}
