#include<bits/stdc++.h>
using namespace std;
int main(){

    int n = 6;
    
    //Naive Solution
    /* if(n==0)
        cout<<"No\n";
    
    bool flag = false;
    while(n!=1){
        if(n%2!=0){
            cout<<"No\n";
            flag = true;
            break;
        }
        n = n/2;
    }
    if(flag != 1)
        cout<<"Yes\n"; */

    //Brian Kerningam's Solution
    /* int res =0;
    while(n>0){
        n = n & (n-1);
        res++;
    }
    if(res==1)
        cout<<"Yes\n";
    else
        cout<<"No\n"; */

    //Most Efficient Solution
    if(n==0)
        cout<<"No\n";
    
    if((n&(n-1))==0)
        cout<<"Yes\n";
    else
        cout<<"No\n";

    return 0;
}