#include<bits/stdc++.h>
using namespace std;
int main(){

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    string arr;
    cin>>arr;
    int n = arr.length();
    int s = pow(2,n);
    for(int i=0;i<s;i++){
        for(int j=0;j<n;j++){
            if((i & (1<<j))!=0)
                cout<<arr[j];

            //cout<<"\n";
        }
        cout<<"\n";
    }
}