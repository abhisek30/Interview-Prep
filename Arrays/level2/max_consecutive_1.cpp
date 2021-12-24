#include<bits/stdc++.h>
using namespace std;
int maxConsecutive1(int arr[],int n){
    int result = 0;
    int temp = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            temp = 0;
        } else {
            temp++;
            result = max(temp,result);
        }
    }
    return result;
}
int main(){ 
    int arr[] = {0,1,0,1,1,1,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Output = "<<maxConsecutive1(arr,size);
    return 0;
}