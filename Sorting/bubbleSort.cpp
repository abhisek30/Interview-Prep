#include<bits/stdc++.h>
using namespace std;
void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}
void bubbleSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<((size-1)-i);j++){
            cout<<arr[j]<<" and "<<arr[j+1]<<"\n";
            if(arr[j]>arr[j+1]){
                //swap(arr[j],arr[j+1]);
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void optimisedBubbleSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        bool swapped = false;
        for(int j=0;j<((size-1)-i);j++){
            cout<<arr[j]<<" and "<<arr[j+1]<<"\n";
            if(arr[j]>arr[j+1]){
                //swap(arr[j],arr[j+1]);
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if(swapped == false)
            break;
    }
}
int main(){
    int arr[] = {2,15,53,90,988,44,100,10,5,8,7,1,67,234,132,68,0,34};
    int arr1[] = {0 ,1, 2, 5, 7 ,8 ,10, 15, 34, 44, 53, 67, 68, 90, 100, 132, 234, 988};
    int size = sizeof(arr)/sizeof(int);
    int size1 = sizeof(arr1)/sizeof(int);
    //bubbleSort(arr,size);
    optimisedBubbleSort(arr1,size1);
    for(int i=0;i<size1;i++)
        cout<<arr1[i]<<" ";
    
    cout<<"\n";
    return 0;
}