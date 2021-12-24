#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0,ans=0;
    while(n>0){
        ans = ans + (n%10)*pow(2,count);
        n = n/10;
        count++;
    }
    cout<<ans<<endl;
    return 0;
}