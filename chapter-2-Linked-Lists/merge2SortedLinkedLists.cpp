 Node* MergeLists(Node *headA, Node *headB)
{   
    if (headA == nullptr)
        return headB;
    else if (headB == nullptr)
        return headA;
    else if (headA->data <= headB->data)
        headA->next = MergeLists(headA->next, headB);
    else if (headA->data > headB->data)
        {
        Node *temp = headB;
        headB = headB->next;
        temp->next = headA;
        headA  = temp;
        headA->next = MergeLists(headA->next, headB);
        }

return headA;

}
