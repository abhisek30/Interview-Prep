#include<bits/stdc++.h>
using namespace std;
void maximumAdjacent(int sizeOfArray,int arr[]){
    for (int i = 1; i < sizeOfArray; i=i+2){
        cout<<max(arr[i-1],arr[i])<<" ";
        if(i!=sizeOfArray-1)
            cout<<max(arr[i],arr[i+1])<<" ";
    }
}
int main(){

    return 0;
}