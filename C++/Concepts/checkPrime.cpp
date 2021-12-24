#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool count=false;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count = true;
            break;
        }
    }
    if(count == false)
        cout<<"Yes\n";
    else
        cout<<"No\n";
}