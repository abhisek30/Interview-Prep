#include<bits/stdc++.h>
using namespace std;
int findMax(int a,int b){
    return (a>b)?a:b;
}
int main(){
    int a,b,ans=0;
    cin>>a>>b;
    int minValue = findMax(a,b);
    for(int i=1;i<=minValue;i++){
        if((a%i==0)&&(b%i==0)){
            ans = i;
        }
    }
    cout<<ans<<endl;
    return 0;
}