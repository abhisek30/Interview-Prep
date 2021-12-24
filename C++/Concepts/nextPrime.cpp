#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n; 
    int found = false;
    for(int i=n+1;;i++){
        int count=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==0){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
}