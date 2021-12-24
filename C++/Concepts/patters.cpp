#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 3;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j<4){
                cout<<" ";
            } else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}