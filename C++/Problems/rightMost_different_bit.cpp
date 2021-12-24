//https://practice.geeksforgeeks.org/problems/rightmost-different-bit-1587115621/1/?track=P100-Bit%20Magic&batchId=238
#include<bits/stdc++.h>
using namespace std;
int posOfRightMostDiffBit(int m, int n){

    int res1=0,res2=0;
    int ans=0;
    while(n>0 || m>0){
        res1 = m & 1;
        res2 = n & 1;
        if(res1!=res2){
            return ans+1;
        }
        m = m>>1;
        n = n>>1;
        ans++;
    }
    return -1;
}
int main(){
    #ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    int m=52,n=4;
    cout<<posOfRightMostDiffBit(m,n)<<"\n";
}