int length(Node * head)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }
    return count;
}

//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
	// Code here
	Node * newNode=new Node(x);
	int len=length(head);
	int middle = len/2;
	
    int i = len%2==0?1:0;
	Node *left=head;
	while(i!=middle)
	{
	    left=left->next;
	    i++;
	}
	
//	Node * right=left->next;
	newNode->next=left->next;
	left->next=newNode;
	
	return head;
}
