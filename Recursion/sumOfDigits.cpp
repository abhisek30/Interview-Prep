#include<bits/stdc++.h>
using namespace std;
int count(int n){
    if(n==0)
    return 0;

    return (n%10) + count(n/10);
} 
int main(){
    int n=0;
    cin>>n;
    cout<<"Total sum of Digits = "<<count(n)<<"\n";
    return 0;
}