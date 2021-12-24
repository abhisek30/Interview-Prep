//https://practice.geeksforgeeks.org/problems/count-total-set-bits-1587115620/1/?track=P100-Bit%20Magic&batchId=238
#include<bits/stdc++.h>
using namespace std;
int table[256];
void initialize(){
    table[0] = 0;
    for(int i=0;i<256;i++)
        table[i] = (i&1) + table[i/2];
}
int countSetBits(int n){
    int ans=0;
    for (int i = 1; i <= n; i++){
        int k = i;
        while(k>0){
            k = k & (k-1);
            ans++;
        }
    }
    return ans;
}
int main(){
    #ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int n = 3;
    cout<<countSetBits(n)<<"\n";
    return 0;
}