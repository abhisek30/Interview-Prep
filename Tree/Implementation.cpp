#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key = k;
        left = NULL;
        right = NULL;
    }
};
void inOrder(Node *root){
    if(root == NULL)
        return;
    else {
        inOrder(root->left);
        cout<<root->key<<" ";
        inOrder(root->right);
    }
}
void preOrder(Node *root){
    if(root == NULL)
        return;
    else {
        cout<<root->key<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(Node *root){
    if(root == NULL)
        return;
    else {
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->key<<" ";
    }
}
int getHeight(Node* root){
    if(root == NULL)
        return 0;
    else{
        return (max(getHeight(root->left),getHeight(root->right))+1);
    }
}
void printAtKNodes(Node* root,int k){
    if(root==NULL)
        return;
    if(k==0)
        cout<<root->key<<" ";
    else{
        printAtKNodes(root->left,k-1);
        printAtKNodes(root->right,k-1);
    }
}
void levelOrder(Node *root){
    //Inefficient Approach
    /* if(root == NULL)
        return;
    else{
        int height = getHeight(root);
        for(int i=0;i<height;i++)
            printAtKNodes(root,i);
    }
    return;  */  

    //Efficient Approach
    if(root == NULL)
        return;
    queue<Node*> q;
    q.push(root);
    while(q.empty() == false){
        Node* curr = q.front();
        cout<<curr->key<<" ";
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
        q.pop();
    }
}
int size(Node* root){
    if(root == NULL)
        return 0;

    return (size(root->left)+size(root->right)+1);
}
int maximum(Node* root){
    if(root == NULL)
        return 0;

    int leftMax = maximum(root->left);
    int rightMax = maximum(root->right);
    return max(leftMax,max(rightMax,root->key));
}
void iterativeInorder(Node* root){
    if(root == NULL)
        return;
    
    stack<Node*> st;
    Node* curr = root;
    while(curr!=NULL || st.empty()==false){
        while(curr!=NULL){
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        cout<<curr->key<<" ";
        curr = curr->right;
    }
}
void iterativePreorder(Node* root){
    //Auxilary Space is O(n)
    /* if(root == NULL)
        return;
    
    stack<Node*> st;
    st.push(root);
    while(st.empty() == false){
        Node* curr = st.top();
        cout<<curr->key<<" ";
        st.pop();
        if(curr->right!=NULL)
            st.push(curr->right);
        if(curr->left!=NULL)
            st.push(curr->left);
    } */

    //Auxilary Space is O(h)
    if(root == NULL)
        return;
    
    stack<Node*> st;
    Node* curr = root;
    while(curr!=NULL || st.empty()== false){
        while(curr!=NULL){
            cout<<curr->key<<" ";
            if(curr->right!=NULL)
                st.push(curr->right);
            curr = curr->left;
        }
        if(st.empty() == false){
            curr = st.top();
            st.pop();
        }
    }
}
void iterativePostorder(Node* root){
    if(root == NULL)
        return;

    stack<Node*> st;
    Node* curr = root;
    do{
        while (curr!=NULL){
            if(curr->right!=NULL)
                st.push(curr->right);
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        if((curr->right!=NULL) && (st.top() == curr->right)) {
            st.pop();
            st.push(curr);
            curr = curr->right;
        }
        else{
            cout<<curr->key<<" ";
            curr = NULL;
        }
    }while(!st.empty());
}
void insert(Node* root){
    int n=0,lc=0,rc=0;
    cout<<"Enter Root Node:";
    cin>>n;
    cout<<"\nEnter -1 to make child NULL\n\n";
    root->key = n;
    queue<Node*> q;
    q.push(root);
    while(q.empty()==false){
        Node* temp = q.front();
        cout<<"Enter "<<temp->key<<" left Child:";
        cin>>lc;
        if(lc!=-1){
            temp->left = new Node(lc);
            q.push(temp->left);
        }
        cout<<"Enter "<<temp->key<<" right Child:";
        cin>>rc;
        if(rc!=-1){
            temp->right = new Node(rc);
            q.push(temp->right);
        }
        q.pop();
        cout<<"\n";
    }
}
int main(){
    //Node* root = new Node(0);
    //insert(root);
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(5);
    root->left->right = new Node(800);
    root->right->left = new Node(25);
    root->right->right = new Node(33);
    cout<<"Inorder: ";
    inOrder(root);
    cout<<"\nIterative Inorder: ";
    iterativeInorder(root);
    cout<<"\nPreorder: ";
    preOrder(root);
    cout<<"\nIterative PreOrder: ";
    iterativePreorder(root);
    cout<<"\nPostOrder: ";
    postOrder(root);
    cout<<"\nIterative PostOrder: ";
    iterativePostorder(root);
    cout<<"\nlevelOrder: ";
    levelOrder(root);
    cout<<"\nheigh of the tree: "<<getHeight(root)<<"\n";
    cout<<"Nodes of tree at distance 0 from Root : ";
    printAtKNodes(root,0);
    cout<<"\nSize of the tree: "<<size(root);
    cout<<"\nMax int inside the tree: "<<maximum(root)<<"\n";
    return 0;
}