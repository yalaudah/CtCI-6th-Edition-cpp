
Node* Insert(Node *head,int data)
{
  // Y: following three lines set up the LAST+1 node     
  Node *temp=new Node(); // NOTE: DYNAMIC ALLOCATION
  temp->data = data;
  temp->next = nullptr;
  // what remains is to connect the LAST node to LAST+1
  if(head == nullptr) // if the head points to nothing (aka it's the last):
    {
    head = temp; // then make sure head is temp
  }
  else // otherwise
    {
    Node *p; // define a new temporary node (to traverse the list)
    p = head; // set p to point at the next node
    while(p->next != nullptr) // while the next node is not nullptr
        p = p->next; // go to the next node
    p->next = temp; // once we arrive at the last node, set it to point to the LAST+1 node temp that we defined earlier
  }
  return(head); 
}
