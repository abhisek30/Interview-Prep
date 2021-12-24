// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    // Function to count number of Ones
    // arr: input array 
    // N: size of input array
    int countOnes(int arr[], int N)
    {
        // Your code here
        int low = 0;
        int high = N-1;
        bool found = true;
        while(found){
            int mid = (low + high)/2;
            cout<<low<<"\t"<<high<<"\t"<<mid<<"\n";
            if(arr[mid-1]==1 && arr[mid]==0){
                found = false;
                return mid;
            }
            if(arr[mid] == 0){
                high = mid -1;
            }
            else if(arr[mid]==1){
                low = mid + 1;
            }
        }
        //cout<<mid<<"\n";
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int arr[] = {1,1,1,1,1,1,1,0};
        //int *arr = new int[n]; 
        //for(int i = 0; i < n; i++)
            //cin>>arr[i];
            
        Solution ob;
        cout <<ob.countOnes(arr, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends