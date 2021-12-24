#include<bits/stdc++.h>
using namespace std;

//naive solution (taking out profit for every pair of elements)
int solution(int arr[],int start,int end){
    if(end<=start)
        return 0;
    
    int profit = 0;
    for(int i=start;i<end;i++){
        for(int j = i+1;j<=end;j++){
            if(arr[j]>arr[i]){
                int curr_profit = arr[j] - arr[i] + solution(arr,start,i-1) + solution(arr,j+1,end);
                profit = max(profit,curr_profit);
            }
        }
    }
    return profit;
}

//Efficient Solution 
int solution(int arr[],int n){
    int profit = 0;
    for(int i=1;i<n;i++){
        if(arr[i] > arr[i-1])
            profit += (arr[i] - arr[i-1]);
    }
    return profit;
}

int main(){
    int arr[] = {1,5,3,1,2,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum profit = "<<solution(arr,0,size-1)<<endl;
    cout<<"Maximum profit = "<<solution(arr,size)<<endl;
    return 0;
}