#include<bits/stdc++.h>
using namespace std;
void naivePartition(int arr[],int low,int high,int x){
    int temp[high-low+1];
    int k = 0;
    for(int i= low;i<=high;i++){
        if(arr[i]<=arr[x]){
            temp[k] = arr[i];
            k++;
        }
    }
    for(int i= low;i<=high;i++){
        if(arr[i]>arr[x]){
            temp[k] = arr[i];
            k++;
        }
    }
    for(int i= low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}
//always considers last element as pivot.
int lomutoPartition(int arr[],int low,int high){
    int i = low-1;
    int pivot = arr[high];
    for(int j = low;j<=high-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
//always considers first element as pivot
int hoarePartition(int arr[],int low,int high){
    int i = low-1;
    int j = high+1;
    int pivot = arr[low];
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);

        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)
            return j;
        
        swap(arr[i],arr[j]);
    }
}
void quickSort(int arr[],int low ,int high){
    if(low<high){
        //using lomuto partition algo
        int p = lomutoPartition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);

        //using hoarePartition algo
        /* int p = hoarePartition(arr,low,high);
        quickSort(arr,low,p);
        quickSort(arr,p+1,high); */
    }
}
int main(){
    //int arr1[] = {12,11,10,9,4,3,8};
    int arr1[] = {2,15,53,90,988,44,100,10,5,8,7,1,67,234,132,68,0,34};
    int size1 = sizeof(arr1)/sizeof(int);
    //naivePartition(arr1,0,size1-1,6);
    for(int i=0;i<size1;i++)
        cout<<arr1[i]<<" ";
    
    cout<<"\n";
    quickSort(arr1,0,size1-1);
    for(int i=0;i<size1;i++)
        cout<<arr1[i]<<" ";
    
    cout<<"\n";
    return 0;
}