#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int> &nums, int target){
    int n = nums.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid =low +(high-low)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(target>nums[mid]){
            low = mid+1;
        }
        else {
            high = mid -1;
        }
       
    }
    return -1;

}
int main(){
    int n ,target;
    cin>>n>>target;
    vector<int>nums(n);
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    int position = binarysearch(nums,target);
cout<< position;

}