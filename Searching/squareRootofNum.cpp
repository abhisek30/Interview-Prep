// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
  

 // } Driver Code Ends
//User function Template for C
long long int floorSqrt(long long int x) 
{
    // Your code goes here   
	long long int low = 1;
	long long int high = x/2;
	long long int ans = 0;
	while(low<=high){
		if(x==1 || x==0)
			return x;
		
		long long int mid = (low+high)/2;

		if(mid * mid == x)
			return mid;
		else if(mid <= (x/mid)){
			low = mid + 1;
			ans = mid;
		}
		else
			high = mid - 1;
	}
	return ans;
}

// { Driver Code Starts.

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%ld", &n);
	
		printf("%ld\n", floorSqrt(n));
	}
    return 0;   
}
  // } Driver Code Ends