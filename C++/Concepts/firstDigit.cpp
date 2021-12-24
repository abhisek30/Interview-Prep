#include<bits/stdc++.h>
using namespace std;
int firstDigit(int n){
    while(n>=10){
        n = n / 10;
    }
    return n;
}
int main(){
    int n;
    cin>>n;
    cout<<firstDigit(n)<<"\n";
    return 0;
}