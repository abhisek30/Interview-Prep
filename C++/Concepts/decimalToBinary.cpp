#include<bits/stdc++.h>
using namespace std;
int main(){

    int n=0;
    cin>>n;
    vector<int> arr;
    while(n>0){
        int r = n % 2;
        arr.push_back(r);
        n = n / 2;
    }
    for(int i = arr.size()-1;i>=0;i--){
        cout<<arr[i];
    }

    return 0;
}