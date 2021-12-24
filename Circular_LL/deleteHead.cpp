#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};

Node *newNode(int data)
{
    Node *temp=new Node(data);
    
    return temp;
}



void displayList(Node *head)
{
    Node *temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" ";
}



int getLength(Node * head)
{
    Node *temp=head;
    
    int count=0;
    while(temp->next!=head)
    {
        count++;
        temp=temp->next;
    }
    return count+1;
}



 // } Driver Code Ends
//User function Template for C++

/*

struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};

*/
Node * deleteHead(Node *head)
{
   //Your code here
   Node* curr = head;
   if(curr->next->next == head){
       curr = curr->next;
       curr->next = curr;
       delete head;
       displayList(curr);
       return curr;
   }
   while(curr->next!=head)
    curr = curr->next;

    curr->next = head->next;
    curr = curr->next;
    head->next = NULL;
    delete head;
    return curr;
    /* Node *temp = head->next;
    int var = head->data;
    head->data = temp->data;
    temp->data = var;
    head->next = temp->next;
    delete temp;
    return head; */
}

// { Driver Code Starts.


void makeCircular(Node * head)
{
    Node * temp=head;
    
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=head;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    Node *head=NULL, *tail = NULL;
	    int x;
	    cin >> x;
	    head = new Node(x);
	    tail = head;
	    for(int i=0;i<n-1;i++)
	    {
	        cin>>x;
	        tail -> next = new Node(x);
	        tail = tail -> next;
	    }
	    
  

	    makeCircular(head);
	    
	    Node * oldHead=head;
	    head=deleteHead(head);
	    
	    if(oldHead->next==NULL)
	    {
	    
    	    displayList(head);
	    }
	    else
	    {
	        cout<<"Please set the next of original head to null";
	    }

	    
	 
	    
	    cout<<endl;
	}
	return 0;
}  // } Driver Code Ends