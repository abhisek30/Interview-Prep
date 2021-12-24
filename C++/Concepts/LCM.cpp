#include<bits/stdc++.h>
using namespace std;
int findMax(int a,int b){
    return (a>b)?a:b;
}
int main(){
    int a,b,ans=0;
    cin>>a>>b;
    int maxValue = findMax(a,b);
    for(int i=maxValue;i<=(a*b);i++){
        if((i%a==0)&&(i%b==0)){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}