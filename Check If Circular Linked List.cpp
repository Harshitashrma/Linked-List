bool isCircular(Node *head)
{
   // Your code here
  if(head==NULL)
  return false;
  
  Node * slow=head;
  Node*fast=head;
  while(fast!=NULL)
  {
      fast=fast->next;
      if(fast!=NULL)
      {
          fast=fast->next;
          slow=slow->next;
      }
      if(fast==slow)
      return true;
  }
  return false;
}
