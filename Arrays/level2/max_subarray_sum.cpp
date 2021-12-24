#include<bits/stdc++.h>
using namespace std;
int maxSubArraySum(int arr[],int n){
    int temp[n];
    temp[0] = arr[0];
    for(int i=1;i<n;i++){
        temp[i] = max(arr[i],temp[i-1]+arr[i]);
    }
    int ans = INT_MIN;
    for(int i=0;i<n;i++)
        ans = max(ans,temp[i]);

    return ans;
}
int main(){
    int arr[] = {-5,1,-2,3,-1,2,-2};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Output = "<<maxSubArraySum(arr,size);
    return 0;

}