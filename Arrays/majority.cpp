//https://practice.geeksforgeeks.org/problems/who-has-the-majority/1/?track=DSA-Foundation-Arrays&batchId=238
#include<bits/stdc++.h>
using namespace std;
int majorityWins(int arr[],int n,int x,int y){
    int xCount=0;
    int yCount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x)
            xCount++;
        else if(arr[i]==y)
            yCount++;
    }
    if(xCount == yCount){
        return x<y?x:y;
    }
    return xCount>yCount?x:y;
}
int main(){
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int t; // Testcases
    cin >> t; // Input the testcases
    while (t--) // Until all testcases are exhausted
    {
        int n; // Size of array
        cin >> n; // Input the size
        int arr[n]; // Declaring array of size n
        for (int i = 0; i < n;
             i++) // Running a loop to input all elements of arr
            cin >> arr[i];

        int x, y; // declare x and y
        cin >> x >> y; // input x and y
        cout << majorityWins(arr, n, x, y)
             << endl; // calling the function that you complete
    }

    return 0;
}