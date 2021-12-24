#include<bits/stdc++.h>
using namespace std;
int check(int N,int temp){
    if(N==0)
        return temp;
    
    temp = (temp * 10) + (N % 10);

    return check(N/10,temp);
}
bool isPalin(int N){
    int reverse = check(N,0);
    if(reverse == N)
        return true;
    else
        return false;
}
int main(){

    return 0;
}