#include<bits/stdc++.h>
using namespace std;
int main(){

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    int res=0,n =11;
    int arr[11];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //naive Solution
    /* for(int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i])
                count++;
        }
        if(count%2!=0)
            cout<<arr[i]<<endl;
    }
    return 0; */

    //Using XOR operator
    for(int i=0;i<n;i++){
        res = res ^ arr[i];
    }
    cout<<res<<"\n";
}