#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    int k = 3;
    //Using Right Shift
    /* n = n>>(k-1);
    if((n&1)==1)
        cout<<"Set\n";
    else    
        cout<<"Not Set\n"; */

    //Using Left Shift
    if(n & (1<<(k-1))!=0)
        cout<<"Set\n";
    else    
        cout<<"Not Set\n";

    return 0;
}