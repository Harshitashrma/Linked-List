int GetNth(struct node* head, int index){
  // Code here
  struct node * temp=head;
  int i=1;
  while(i!=index)
  {
      temp=temp->next;
      i++;
  }
  int ans=temp->data;
  return ans;
}
