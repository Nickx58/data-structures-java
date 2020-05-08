public class LinkList {
  Node head; // head of the list

  static class Node {
    int data;
    Node next;

    Node(int d) {
      data = d;
      next = null;
    } // constructor
  }

  public void printList() {
    Node n = head;
    while (n != null) {
      System.out.print(n.data + " ");
      n = n.next;
    }
  }

  public static void main(String[] args) {
    LinkList ll = new LinkList();
    ll.head = new Node(1);
    Node second = new Node(2);
    Node third = new Node(3);

    ll.head.next = second;
    second.next = third;
    third.next = null;
    ll.printList();
  }
}
