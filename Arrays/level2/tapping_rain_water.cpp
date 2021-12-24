#include<bits/stdc++.h>
using namespace std;
//naive (without precomputing Lmax and Rmax for every element) theta (n^2)
/* int solution(int arr[],int n){
    int res = 0;
    for(int i=1;i<n-1;i++){
        int lmax = arr[0];
        for(int j=0;j<i;j++)
            lmax = max(arr[i],lmax);

        int rmax = arr[n-1];
        for(int j=i+1;j<n;j++)
            rmax = max(arr[i],rmax);

        res += min(lmax,rmax) - arr[i];
    }
    return res;
} */

//efficient solution (with precomputing Lmax and Rmax for every element) theta (n),extra space
int solution(int arr[],int n){
    int res = 0;
    int lmax[n],rmax[n];
    lmax[0] = arr[0];
    for(int i=1;i<n;i++){
        lmax[i] = max(lmax[i-1],arr[i]);
    }

    rmax[n-1] = arr[n-1];
    for (int i = n-2; i>=0; i--){
        rmax[i] = max(rmax[i+1],arr[i]);
    }
    

    for(int i=1;i<n-1;i++){
        res += min(lmax[i],rmax[i]) - arr[i];
    }

    return res;

}
int main(){
    int arr[] = {3,0,1,2,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Output = "<<solution(arr,size);
    return 0;
}