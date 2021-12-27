#include <bits/stdc++.h>
using namespace std;
void reverseInGroups(vector<long long> &arr, int n, int k){
    for (long long i = 0; i < n; i = i+k){
        long long left = i;
        long long right = i+k-1;
        if(right > n-1)
            right = n-1;
        
        cout<<left<<","<<right<<endl;
        while(left < right){
            long long temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}
int main(){
    vector<long long> arr;
    int t=0;
    for (int i = 0; i < 4; i++){
        t=0;
        cin>>t;
        arr.push_back(t);
    }
    reverseInGroups(arr,4,3);
    for (int i = 0; i < 4; i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}