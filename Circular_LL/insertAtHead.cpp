// { Driver Code Starts
//Initial Template for C++


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


Node *addNode(Node *head, int data)
{
    if(head==NULL)
    head=newNode(data);
    else
    head->next=addNode(head->next,data);
    
    return head;
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

Node *insertInHead(Node * head, int data)
{
    //Your code here
    Node* temp = new Node(data);
    if(head==NULL){
        temp->next  = temp;
        return temp;
    }

    //method 1 O(n)
    /* Node *curr = head;
    while(curr->next!=head){
        curr = curr->next;
    }
    temp->next = head;
    curr->next = temp;
    return temp; */

    //method 2 O(1)
    temp->next = head->next;
    head->next = temp;
    int var = temp->data;
    temp->data = head->data;
    head->data = var;
    return head;
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
	    
	    int data;
	    cin>>data;
	    
	    makeCircular(head);
	    
	    head=insertInHead(head,data);
	    
	    displayList(head);
	    
	    cout<<endl;
	}
	return 0;
}  // } Driver Code Ends