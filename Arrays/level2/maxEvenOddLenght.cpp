#include<bits/stdc++.h>
using namespace std;
int maxEvenOddLength(int arr[],int n){
    int ans = 1;
    int res = 1;
    for (int i = 0; i < n; i++){
        if((arr[i]%2==0 && arr[i-1]%2!=0)||(arr[i-1]%2==0 && arr[i]%2!=0)){
            res++;
            ans = max(res,ans);
        }else{
            res=1;
        }
    }
    return ans;
}
int main(){

    int arr[] = {5,10,20,6,3,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Output = "<<maxEvenOddLength(arr,size);

    return 0;
}