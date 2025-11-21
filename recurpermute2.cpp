#include<bits/stdc++.h>
using namespace std;
void recurpermute(int index,vector<int>&nums,vector<vector<int>>&ans){
    if(index==nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i = index;i<nums.size();i++){
        swap(nums[i],nums[index]);
        recurpermute(index+1,nums,ans);
        swap(nums[index],nums[i]);
    }
}

vector<vector<int>>permute(vector<int>&nums){
    vector<vector<int>>ans;
    recurpermute(0,nums,ans);
    return ans;
}

int main(){
    vector<vector<int>>ans;
    vector<int>nums = { 1,2,3};
  vector<vector<int>>result = permute(nums);
  for(auto&v:result){
    for(int x:v){
        cout<<x<< " ";
     

    }
       cout<<endl;
  }
  return 0;



}