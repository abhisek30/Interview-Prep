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



void makeCircular(Node * head)
{
    Node * temp=head;
    
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=head;
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
vector<int> displayList(Node *head){
    Node* curr = head;
    vector<int> arr;
    if(head->next == head){
        arr.push_back(head->data);
        return arr;
    }
    while(curr->next!=head){
        arr.push_back(curr->data);
        curr = curr->next;
    }
    arr.push_back(curr->data);
    return arr;
}


// { Driver Code Starts.


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
	    
	    vector<int> vec = displayList(head);
	    for(int i = 0;i<vec.size();i++){
	        cout<<vec[i]<<" ";
	    }
	    
	    cout<<endl;
	}
	return 0;
}  // } Driver Code Ends