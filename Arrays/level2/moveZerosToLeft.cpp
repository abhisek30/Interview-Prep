#include<bits/stdc++.h>
using namespace std;
void moveZerosToLeft(int arr[],int n){
    int i=0,j=0,temp=0,found = 0;
    for(i = 0 ;i<n;i++){
        if(arr[i] == 0){
            temp = i;
            found = 0;
            for(j = i+1;j<n;j++){
                if(arr[j]>0){
                    found = 1;
                    break;
                }
            }
            if(found == 1)
                swap(arr[temp],arr[j]);
        }
    }
}
int main(){
    int arr[] = {5,8,10,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    moveZerosToLeft(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}