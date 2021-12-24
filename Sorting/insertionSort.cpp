#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int x = arr[i];
        int j = i-1;
        while(j>=0 && x<arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
}
int main(){
    //int arr[] = {2,15,53,90,988,44,100,10,5,8,7,1,67,234,132,68,0,34};
    int arr[] = {27,3,15,7,10,6};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Initial Array: ";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    
    cout<<"\n";
    insertionSort(arr,size);
    cout<<"Sorted Array: ";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    
    cout<<"\n";
    return 0;
}