Node* Delete(Node *head, int position)
{
    // TODO: assert position >= 0
    // if position is zero, set head to the next value and return it. it the next value is nullptr, then it’s like we deleted the list
   if (position == 0)
    {
        head = head->next;
        return head;
    }

    Node *current = head;

    int count = 0;
    while (count != position - 1) // we want the position before the node to be deleted 
    {
        current = current->next;
        count++;
    }

    current->next = (current->next)->next;

    //free(ahead); this line is not neccesary,
    // you just have to change the pointers and skip the deleted one

    return head;
}
