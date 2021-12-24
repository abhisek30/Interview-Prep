//https://practice.geeksforgeeks.org/problems/is-array-sorted/1/?track=DSA-Foundation-Arrays&batchId=238
#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int n){
    bool asc = true;
    bool des = true;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1])
            asc = false;
        else if(arr[i]>arr[i-1])
            des = false;
    }
    if(asc || des)
        return true;
    else
        return false;
}
int main(){

}