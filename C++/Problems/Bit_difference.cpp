//https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1/?track=P100-Bit%20Magic&batchId=238
#include<bits/stdc++.h>
using namespace std;
int countBitsFlip(int a, int b){
    // Your logic here
    int res1=0,res2=0,ans=0;
    while(a>0 || b>0){
        res1 = a & 1;
        res2 = b & 1;
        if(res1!=res2)
            ans++;
        
        a = a>>1;
        b = b>>1;
    }
    return ans;
}
int main(){
    #ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int a=25,b=20;
    cout<<countBitsFlip(a,b)<<"\n";
    return 0;
}