// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function Template for C++

//User function Template for C++

/*
names[]: array of names
n: size of array
*/
bool compare(string a,string b){
    return a[0] < b[0];
}
string TieBreak(string names[], int n)
{
    // your code here
    sort(names,names+n,compare);
    
    int max_count = 1,count=1;
    string res = names[0];
    for(int i=1;i<n;i++){
        if(names[i-1]==names[i]){
            count++;
        } else {
            if(count > max_count){
                max_count = count;
                res = names[i-1];
            }
            count = 1;
        }
    }
    if(count > max_count){
        max_count = count;
        res = names[n-1];
    }  
    return res;
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
        
        string names[n];
        for(int i = 0; i < n; i++)
            cin>>names[i];
        cout << TieBreak(names,n) <<endl; 
    }
}
  // } Driver Code Ends