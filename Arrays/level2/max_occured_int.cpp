#include<bits/stdc++.h>
using namespace std;
int arr[100];
long long maxSubarraySum(int L[],int R[], int n,int maxx){

    for(int i=0;i<maxx;i++){
        arr[L[i]] += 1;
        arr[R[i]+1] -= 1; 
    }

    int maxSum = arr[0], index;
    for(int i=1;i<maxx+1;i++){
        arr[i] = arr[i] + arr[i-1];
        if(maxSum < arr[i]){
            maxSum = arr[i];
            index = i;
        }
    }

    return index;
}
int main(){

    return 0;
}