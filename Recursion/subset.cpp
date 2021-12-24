#include<bits/stdc++.h>
using namespace std;
void generateSubset(string arr,string curr,int n){
    if(n==arr.length()){
        cout<<curr<<"\n";
        return;
    }
    generateSubset(arr,curr,n+1);
    generateSubset(arr,curr+arr[n],n+1);

}
int main(){
    generateSubset("abc","",0);
    return 0;
}