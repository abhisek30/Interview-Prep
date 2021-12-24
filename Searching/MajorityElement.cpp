// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size){
        if(size == 1)
            return a[0];
        
        sort(a,a+size);
        long long count  = 1;
        long long ans = -1;
        for (long long int i = 1; i <= size; i++){
            if(a[i]==a[i-1]){
                count++;
            } else {
                if(count > (size/2)){
                    ans = a[i-1];
                }
                count = 1;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends