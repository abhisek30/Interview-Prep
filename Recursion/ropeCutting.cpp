#include<bits/stdc++.h>
using namespace std;
int findPieces(int n,int a,int b,int c){
    if(n==0)
        return 0;

    if(n<0)
        return -1;

    int ans = max(findPieces(n-a,a,b,c),max(findPieces(n-b,a,b,c),findPieces(n-c,a,b,c)));
    if(ans == -1)
        return -1;
    
    return ans+1;
}
int main(){
    int n = 5,a=2,b=5,c=1;
    cout<<findPieces(n,a,b,c)<<"\n";


}