//https://practice.geeksforgeeks.org/problems/maximum-and-value-1587115620/1/?track=P100-Bit%20Magic&batchId=238
#include<bits/stdc++.h>>
using namespace std;
int maxAND (int arr[], int N){
    // Your code here
    int ans=0;
    for(int i=0;i<N;i++){
        int res = arr[i] ^ (arr[i] & (arr[i]-1));
        if(res>=ans )
            ans = res;
    }
    return ans;
}
int main(){

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int n=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<maxAND(arr,n)<<"\n";
    
    return 0;
}