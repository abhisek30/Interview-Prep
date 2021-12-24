#include<bits/stdc++.h>
using namespace std;
//merge function to sort 2 arrays into another
void merge(int arr1[],int arr2[],int size1,int size2){
    int i = 0;
    int j = 0;
    while(i<size1 && j<size2){
        if(arr1[i]<=arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        } else {
            cout<<arr2[j]<<" ";
            j++;
        }
    }
    while(i<size1){
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<size2){
        cout<<arr2[j]<<" ";
            j++;
    }
}
//Abdul barri
//this function is to sort the array itself using merge concept(Applicable to different value of low starting from 0,mid,high)
/* void merge(int arr[],int low,int mid,int high){
    int i = low;
    int j = mid+1;
    int arr2[high+1];
    int k =low;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            arr2[k] = arr[i];
            k++;
            i++;
        } else {
            arr2[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        arr2[k] = arr[i];
        k++;
        i++;
    }
    while(j<=high){
        arr2[k] = arr[j];
        k++;
        j++;
    }
    i =low;
    while(i<=high){
        arr[i] = arr2[i];
        cout<<arr[i]<<" - ";
        i++;
    }
    cout<<" \n";
} */
//Sandeep Jain
//this function is to sort the array itself using merge concept(Applicable to different value of low,mid,high)
void merge(int arr[],int low,int mid,int high){
    //this part is for creating 2 sorted arrays from one given with low,mid,high
    int size1 = mid - low + 1;
    int size2 = high - mid;
    int leftArr[size1];
    int rightArr[size2];
    for(int i=0;i<size1;i++){
        leftArr[i] = arr[low+i];
    }
    for(int i=0;i<size2;i++){
        rightArr[i] = arr[mid+i+1];
    }

    //this part is same as to merge two sorted arrays to another
    int i =0,j=0,k=low;
    while(i<size1 && j<size2){
        if(leftArr[i]<=rightArr[j]){
            arr[k] = leftArr[i];
            i++;
        } else{
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
    while(i<size1){
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    while(j<size2){
        arr[k] = rightArr[j];
        k++;
        j++;
    }
}
void mergeSort(int arr[],int low,int high){
    if(high>low){
        int mid = low + (high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);    
    }
    //for(int i=0;i<high+1;i++)
        //cout<<arr[i]<<" ";
    
    //cout<<"\n"; 
}
int main(){
    int arr1[] = {2,15,53,90,988,44,100,10,5,8,7,1,67,234,132,68,0,34};
    int size1 = sizeof(arr1)/sizeof(int);
    //merge(arr1,0,1,4);
    mergeSort(arr1,0,size1-1);
    for(int i=0;i<size1;i++)
        cout<<arr1[i]<<" ";
    
    cout<<"\n";
    return 0;
}