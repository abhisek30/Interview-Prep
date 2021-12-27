#include<bits/stdc++.h>
using namespace std;
int minAdjDiff(int arr[],int n){
    int ans = abs(arr[1]-arr[0]);
    for(int i=2;i<n;i++){
        ans = min(ans,abs(arr[i]-arr[i-1]));
        if(i==n-1){
            ans = min(ans,abs(arr[i]-arr[0]));
        }
    }
    return ans;
}
int main(){
    int size = 3;
    int arr[size] = {17,63,80};
    cout<<minAdjDiff(arr,size)<<endl;
}