#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int size){
    for(int i=0;i<size;i++){
        int k = i;
        int min = arr[i];
        for(int j=i+1;j<size;j++){
            if(min>arr[j]){
                min = arr[j];
                k = j;
            }
        }
        swap(arr[i],arr[k]);
    }
}
int main(){
    int arr[] = {2,15,53,90,988,44,100,10,5,8,7,1,67,234,132,68,0,34};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Initial Array: ";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    
    cout<<"\n";
    selectionSort(arr,size);
    cout<<"Sorted Array: ";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    
    cout<<"\n";
    return 0;
}