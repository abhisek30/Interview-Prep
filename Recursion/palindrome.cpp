#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
     bool checkPalindrome(string arr,int start,int end){
         if(start>=end)
            return true;

        return (arr[start]==arr[end]) && checkPalindrome(arr,start+1,end-1);
     }
};
int main(){
    string arr;
    cin>>arr;
    Solution obj;
    cout<<obj.checkPalindrome(arr,0,arr.length()-1)<<"\n";
    return 0;
}