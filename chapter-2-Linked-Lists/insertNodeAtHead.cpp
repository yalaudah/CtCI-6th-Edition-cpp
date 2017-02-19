/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
    // dynamically allocate new node:
    Node *newHead = new Node();
    // set the new node to be the input, and to point to the head:
    newHead->data = data;
    newHead->next = head;

   return newHead; // without ().. hmm both work i guess!
}
