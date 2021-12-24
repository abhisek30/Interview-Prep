//https://practice.geeksforgeeks.org/problems/mean-and-median-1587115620/1/?track=DSA-Foundation-Arrays&batchId=238
#include<bits/stdc++.h>
using namespace std;
int median(int A[],int N){
    sort(A,A+N);
        
        //your code here
        //If median is in fraction then convert it to integer and return
        if(N%2==0){
            return ((A[N/2-1]+A[N/2])/2);
        }
        else
            return A[N/2];
}
    //Function to find mean of the array elements.
int mean(int A[],int N){
        //your code here
        int sum = 0;
        for(int i=0;i<N;i++){
            sum += A[i];
        }
        return sum/N;
}
int main(){

    return 0;
}