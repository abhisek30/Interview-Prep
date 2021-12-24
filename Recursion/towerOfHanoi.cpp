#include<bits/stdc++.h>
using namespace std;
/* void toh(int N,int from ,int to,int aux){
    if(N==1){
        cout<<"move disk "<<N<<" from "<<"rod "<<from<<" to rod "<<to<<"\n";
        return ;
    }
    toh(N-1,from,aux,to);
    cout<<"move disk "<<N<<" from "<<"rod "<<from<<" to rod "<<to<<"\n";
    toh(N-1,aux,to,from);
} */
long long toh(int N,int from ,int to,int aux){
        long long ans1=0,ans2=0;
        if(N==1){
            cout<<"move disk "<<N<<" from "<<"rod "<<from<<" to rod "<<to<<"\n";
            return ans1+ans2+1;
        }
        ans1 = toh(N-1,from,aux,to);
        cout<<"move disk "<<N<<" from "<<"rod "<<from<<" to rod "<<to<<"\n";
        ans2 = toh(N-1,aux,to,from);
        return ans1+ans2+1;
    }
void solve(int n,int a,int b,int c){
    if(n==1){
        cout<<"Move "<<n<<" from "<<a<<" to "<<c<<"\n";
        return;
    }
    solve(n-1,a,c,b);
    cout<<"Move "<<n<<" from "<<a<<" to "<<c<<"\n";
    solve(n-1,b,a,c);
}
int main(){
    solve(1,1,2,3);
    cout<<toh(1,1,3,2)<<"\n";
    return 0;
}