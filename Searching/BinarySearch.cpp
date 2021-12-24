#include<bits/stdc++.h>
using namespace std;
//recursive
int BinarySearch(int arr[],int x,int low,int mid,int high){
    if(low>high)
        return -1;
    
    if(arr[mid] == x)
        return mid+1;
    else if(arr[mid]>x){
        high = mid -1;
        mid = (low + high)/2;
        return BinarySearch(arr,x,low,mid,high);
    } else {
        low = mid + 1;
        mid = (low + high)/2;
        return BinarySearch(arr,x,low,mid,high);
    }
}
//iterative
int BinarySearch(int arr[],int n,int x){
    int low = 0;
    int high = n-1;
    int mid = (low + high)/2;

    while(low<=high){
        if(arr[mid] == x){
            return mid+1;
        }
        else if(arr[mid]>x){
            high = mid -1;
            mid = (low + high)/2;
        }
        else {
            low = mid + 1;
            mid = (low + high)/2;
        }
    }
    return -1;
}
int main(){
    int arr[] = {10,20,30,40,60,70,80,90,100};
    int size = sizeof(arr)/sizeof(int);
    //cout<<size<<"\n";
    cout<<BinarySearch(arr,size,40)<<"\n";
    cout<<BinarySearch(arr,100,0,(0+(size-1)/2),size-1)<<"\n";
    return 0;
}