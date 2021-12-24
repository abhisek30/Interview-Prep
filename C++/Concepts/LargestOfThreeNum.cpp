#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 1000,b = 10, c = 1001;
    if(a>b && a>c){
        cout<<"A is Greater\n";
    }
    else if(b>a && b>c){
        cout<<"B is Greater\n";
    }
    else {
        cout<<"C is Greater\n";
    }
    return 0;
}