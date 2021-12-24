// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    vector<int> res;
    int low = 0;
    int high = n-1;
    int mid=0;
    bool flag = false;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==x){
            flag = true;
            break;
        } else if(arr[mid]<x)
            low = mid +1;
        else
            high = mid -1;
    }
    if(flag==false){
        res.push_back(-1);
        res.push_back(-1);
        return res;
    }
    low = mid;
    high = mid;
    while(arr[low]==x){
        low--;
    }
    while(arr[high]==x){
        high++;
    }
    res.push_back(low+1);
    res.push_back(high-1);
    return res;
}