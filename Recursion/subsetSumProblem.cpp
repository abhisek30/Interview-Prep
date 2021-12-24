#include<bits/stdc++.h>
using namespace std;
int subSetProblem(int arr[],int n,int sum){
    if(n==0){
        if(sum==0)
            return 1;
        else
            return 0;
    }

    return subSetProblem(arr,n-1,sum) + subSetProblem(arr,n-1,sum-arr[n-1]);
}
int main(){
    int arr[] = {10,5,2,3,6,50,40,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 56;
    cout<<subSetProblem(arr,size,sum)<<endl;
    return 0;
}