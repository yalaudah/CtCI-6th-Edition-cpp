/*
  Insert Node at a given position in a linked list
  head can be NULL
  First element in the linked list is at position 0
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{

    // if input is nullptr, then initialize the list, and return the head
    if (head == nullptr)    
    {
        // allocate memory for new node
        head = new Node();
        // set the data and point to NULL (since this is the only node)
        head->data = data;
        head->next = nullptr;
        return head;
    }
    else if (position == 0) // if the case is insert Node before head node
        {
        // allocate memory for new node
        Node *newHead = new Node();
        // set the data and the point to the old head
        newHead->data = data;
        newHead->next = head;
        // return the new head
        return newHead;
        }

    // otherwise, lets find the nth node:
    Node *temp = head;
    int currentPosition = 1; // immediately after head node

    while (currentPosition != position)
    {   
        // walk the list until you reach the position
        temp = temp->next;
        currentPosition++;
    }

    // then dynamically allocate a new node:
    Node *nthNode = new Node();
    // allocate the data:    
    nthNode->data = data;
    // nth Node should point to the next one:
    nthNode->next = temp->next;
    // the one before should point to the Nth node:
    temp->next = nthNode;
    return head;  
}
