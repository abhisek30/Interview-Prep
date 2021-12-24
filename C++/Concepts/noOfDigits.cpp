#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 19,ans=0;

    while(n>0){
        n = n/10;
        ans++;
    }
    cout<<ans<<endl;
}