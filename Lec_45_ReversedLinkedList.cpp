Node* reverseLinkedList(Node *head)
{
    if(head==NULL ||head->next==NULL)
    {
        return head;

    }
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;
    
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;

        
    }
    return prev;

}
/*Node* reverseLinkedList(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    
    while(curr != NULL)
    {
        forward = curr->next;   // Step 1: store next node
        curr->next = prev;      // Step 2: reverse link
        prev = curr;            // Step 3: move prev forward
        curr = forward;         // Step 4: move curr forward
    }

    return prev;
}*/