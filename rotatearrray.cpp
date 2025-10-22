#include<bits/stdc++.h>
using namespace std;
void rotatearray(vector<int>&nums,int k){
    int n = nums.size();
    k%=n;
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
}

int main(){
    int n ;
    int k;
    cin>>n;
    cin>>k;
    vector<int>nums(n);
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    rotatearray(nums,k);
    for(int i = 0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}