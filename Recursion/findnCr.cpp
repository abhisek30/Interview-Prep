#include<bits/stdc++.h>
using namespace std;
/* int factorial(int num){
    if(num == 0)
        return 1;
    return num * factorial(num-1);
} */
int nCr(int n,int r){
    if((r==n) || (r==0))
        return 1;
    if(r==1)
        return n;
    
    return nCr(n-1,r-1)+nCr(n-1,r);
}
int main(){
    cout<<nCr(5,2)<<"\n";
}