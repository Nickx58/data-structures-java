/*
Using Two Pointer technique.
Initially Both Pointer points to the head node of the list.
First Pointer moving onlu after Second pointer Made N moves.
*/

// Head is declared as global variable

void printNthNode(int n)
{
  Node *main = head;
  Node *ref = head;
  int count = 0;
  while (count < n)
  {
    ref = ref->next;
    count++;
  }
  while (ref != NULL)
  {
    main = main->next;
    ref = ref->next;
  }
  cout << "Nth List from the end: " << main->data << endl;
}