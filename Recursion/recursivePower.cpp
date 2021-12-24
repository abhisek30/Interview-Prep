#include<bits/stdc++.h>
using namespace std;
int recursivePower(int n,int p){
    if(p==1){
        return n;
    }
    return n*recursivePower(n,p-1);
}
int main(){
    cout<<recursivePower(2,5)<<"\n";
    return 0;
}