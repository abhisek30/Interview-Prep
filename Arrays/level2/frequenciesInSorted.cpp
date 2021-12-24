#include<bits/stdc++.h>
using namespace std;
void solution(int arr[],int size){
    int a = arr[0];
    int count = 1;
    for(int i =1;i<=size;i++){
        if(arr[i] == a){
            count++;
        } else{
            cout<<a<<" - "<<count<<endl;
            count = 1;
            a = arr[i];
        }
    }
}
int main(){
    int arr[] = {10,10,10,10,20,30,40,50,60,70,70,80,80,80,90};
    int size = sizeof(arr)/sizeof(arr[0]);
    solution(arr,size);

    return 0;
}