#include<bits/stdc++.h>
using namespace std;
void minConsecutiveFlips(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i-1]!=arr[i]){
            if(arr[i]!=arr[0])
                cout<<"from "<<i<<" to ";
            else   
                cout<<i-1<<endl;
        }
    }
    if(arr[n-1]!=arr[0])
    cout<<n-1<<endl;
    
}
int main(){
    int arr[] = {1,1,0,0,0,1,1,1,0,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    minConsecutiveFlips(arr,size);
    return 0;
}