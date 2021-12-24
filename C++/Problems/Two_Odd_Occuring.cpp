#include<bits/stdc++.h>
using namespace std;
int main(){

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    int XOR=0,n;
    cin>>n;
    int arr[n];
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

    //Using XOR,AND and NOT operator
    for(int i=0;i<n;i++){
        XOR = XOR ^ arr[i];
    }
    cout<<XOR<<"\n";
    int rsetBit = XOR & (~(XOR-1));   //right most set bit
    cout<<rsetBit<<"\n";
    int res1=0,res2=0;
    for(int i=0;i<n;i++){
        if((arr[i] & rsetBit)!=0){
            res1 = res1 ^ arr[i];
            cout<<arr[i]<<"-res1\n";
        }
        else{
            cout<<arr[i]<<"-res2\n";
            res2 = res2 ^ arr[i];
        }
    }
    cout<<res1<<" and "<<res2<<"\n";
}