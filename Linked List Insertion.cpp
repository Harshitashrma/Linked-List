class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node * newNode=new Node(x);
       newNode->next=head;
       return newNode;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       if(head==NULL)
       {
             Node * newNode=new Node(x);
             return newNode;
       }
       Node * curr=head;
       while(curr->next!=NULL)
       {
           curr=curr->next;
       }
       
       curr->next=new Node(x);
       return head;
    }
};
