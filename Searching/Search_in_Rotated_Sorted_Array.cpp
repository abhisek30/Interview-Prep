#include<bits/stdc++.h>
using namespace std;
int Bsearch(vector<int> arr,int x){
    int ans = -1;
    int low = 0;
    int high = arr.size();
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid]==x){
            ans = mid;
            break;
        } else if(arr[mid]<x)
            low = mid +1;
        else
            high = mid -1;
    }
    return ans;
}
int search(vector<int>& nums, int target) {
    int n = nums.size();
    int minIndex = min_element(nums.begin(),nums.end()) - nums.begin();
    //0,1,2,3,5,6,7(-----)
    
    //11,12,15,18,1,2,3 = 1,2,3,11,12,15,18
    //15,18,1,2,3,11,12
    //if minIndex is 0 , array is sorted from 0 pos,no need to rotate the array
    if(minIndex!=0){
        vector<int> arr;
        int i=minIndex;
        while(true){
            if(i==minIndex-1){
                arr.push_back(nums[i]);
                break;
            }
            else if(i==n-1){
                arr.push_back(nums[i]);
                i=0;
            } else{
                arr.push_back(nums[i]);
                i++;
            }
        }
        //Bsearch as per sorted array(sorted from 0 index) 
        i = Bsearch(arr,target);
        if(i == -1)
            return i;

        int mod = minIndex % n;
        int ans = (mod+i)%n;
        return ans;
    }
    return Bsearch(nums,target);
}

int main(){
    vector<int> arr{1,3};
    //vector<int> arr{4,5,6,7,0,1,2};
    cout<<search(arr,1)<<" \n";
    return 0;
}