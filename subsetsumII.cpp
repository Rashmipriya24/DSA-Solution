#include<bits/stdc++.h>
using namespace std;
void findsubsets(int ind,vector<int>&ds,vector<int>&nums,vector<vector<int>>&ans){
    ans.push_back(ds);
    for(int i = ind;i<nums.size();i++){
        if(i!=ind&&nums[i]==nums[i-1]) continue;
        ds.push_back(nums[i]);
        findsubsets(i+1,ds,nums,ans);
        ds.pop_back();
    }
}

vector<vector<int>> subsetwithdup(vector<int>&nums){
    vector<vector<int>>ans;
    vector<int>ds;
    sort(nums.begin(),nums.end());
    findsubsets(0,ds,nums,ans);
    return ans;
}

int main(){
    int n ;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0;i<nums.size();i++){
        cin>>nums[i];
    }
   vector<vector<int>>ans= subsetwithdup(nums);
   for(auto &subset : ans){
        cout << "[ ";
        for(int x : subset){
            cout << x << " ";
        }
        cout << "]\n";
    }
    return 0;

}