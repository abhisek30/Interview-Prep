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

Node * deleteAtPosition(Node *head,int pos){
    //Your code here
    if(pos==1){
        Node *temp = head->next;
        int var = head->data;
        head->data = temp->data;
        temp->data = var;
        head->next = temp->next;
        delete temp;
        return head; 
    }
    Node* curr = head;
    int i = 0;
    while(curr->next!=head && i<pos){
        i++;
        curr = curr->next;
    }
    Node* temp = curr->next;
    if(curr->next!=head){
        curr->next = curr->next->next;
    } else{
        curr->next = head;
    }
    delete temp;
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
	    
	    
	    int pos;
	    cin>>pos;

	    makeCircular(head);
	    
	  
	    head=deleteAtPosition(head,pos);
	    
	    displayList(head);
 
	    cout<<endl;
	}
	return 0;
}  // } Driver Code Ends