#include<bits/stdc++.h>
using namespace std;
void permute(string s,int i){
    if(i == s.length()-1){
        cout<<s<<endl;
        return;
    }
    for(int j=i;j<s.length();j++){
        //swap(s[i],s[j]);
        permute(s,i+1);
        //swap(s[j],s[i]);
    }
}
int main(){
    permute("ABCD",0);
    return 0;
}