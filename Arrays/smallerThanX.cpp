//https://practice.geeksforgeeks.org/problems/find-immediate-smaller-than-x/1/?track=DSA-Foundation-Arrays&batchId=238
#include<bits/stdc++.h>
using namespace std;
int immediateSmaller(int arr[], int n, int x){
    // your code here
    int ans=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<x && ans<arr[i]){
            ans = arr[i];
        }
    }
    return ans;    
}
int main(){
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int t;
	cin>>t;
	
	while(t--)
	{
	    
            int n;
        	cin >> n;
        	
        	int arr[n];
        	
        	for(int i = 0;i<n;i++){
        	    cin >> arr[i];
        	}
        	
        	int x;
        	cin >> x;
        	cout <<immediateSmaller(arr, n, x) << endl;
	}
	return 0;
}