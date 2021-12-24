//https://practice.geeksforgeeks.org/problems/find-first-set-bit-1587115620/1/?track=P100-Bit%20Magic&batchId=238
#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    long long n=0;
    cin>>n;
    long long res=0,ans=0;
    while(n>0){
        res = n & 1;
        if(res==1){
            ans++;
            break;
        }
        ans++;
        n = n>>1;
    }
    if(ans == 0)
        cout<<"0\n";
    else
        cout<<ans<<"\n";
}