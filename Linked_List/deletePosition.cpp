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


void displayList(Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
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

Node * deleteAtPosition(Node *head,int pos)
{
    //Your code here
    if(pos==1){
        Node* temp = head;
        head = head->next;
        delete(temp);
        return head;
    }
    Node* curr = head;
    int i = 1;
    while(curr->next!=NULL && i<pos-1){
        curr = curr -> next;
        i++;
    }
    Node* temp = curr->next;
    curr->next = curr->next->next;
    delete(temp);
    return head;
}

// { Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        int pos;
	    cin>>pos;
	    head=deleteAtPosition(head,pos);
    	displayList(head);
	    cout<<endl;
    }
    return 0;
}  // } Driver Code Ends