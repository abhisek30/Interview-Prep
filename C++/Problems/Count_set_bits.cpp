//https://practice.geeksforgeeks.org/problems/set-bits0143/1
#include<bits/stdc++.h>
using namespace std;
int main(){
    //Naive Solution - To check last bit of number if Setbit(1)-incremnt then remove last bit of number
    /* int n=0;
    cin>>n;
    int res=0;
    int ans =0;
    while(n>0){ 
        //both statements gives remainder of n
        res = n & 1;    
        //res = n % 2;

        if(res==1)      
            ans++;

        //both divides n by 2
        //n = n / 2;
        n = n>>1;
    }
    cout<<ans<<endl; */

    //Brian Kerningam's Solution - To change only setbit (1) to unset(0)
    int n=0;
    cin>>n;
    int res=0;
    while(n>0){ 
        n = n & (n-1);      
        res++;
    }
    cout<<res<<endl;

    
}