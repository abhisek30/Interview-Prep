//https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1/?track=DSA-Foundation-Arrays&batchId=238
#include<bits/stdc++.h>
using namespace std;
void rotateArr(int arr[],int d,int n){
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }
    int i=0;
    while(i<(n-d)){
        arr[i] = arr[i+d];
        i++;
    }
    int j = 0;
    while(i<n){
        arr[i] = temp[j];
        i++;
        j++;
    }
}
int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    //calling rotateArr() function
	    rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  // } Driver Code Ends