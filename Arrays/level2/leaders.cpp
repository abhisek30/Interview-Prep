#include<bits/stdc++.h>
using namespace std;
void solution(int arr[],int size){
    //O(n^2) solution
    /* int count;
    for(int i=0;i<size;i++){
        for(int j = i+1;j<size;j++){
            count = 0;
            if(arr[i]<arr[j]){
                count++;
                break;
            }   
        }
        if(count == 0)
            cout<<arr[i]<<endl;
    } */
    //O(n) solution
    int curr_leader = arr[size-1];
    cout<<curr_leader<<" ";
    for(int i = size-2;i>=0;i--){
        if(arr[i]>curr_leader){
            curr_leader = arr[i];
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int arr[] = {7,10,4,3,6,5,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    solution(arr,size);
    return 0;
}