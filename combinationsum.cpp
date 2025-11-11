#include<bits/stdc++.h>
using namespace std;
 void findcombination(int ind,int target,vector<int>&arr,vector<vector<int>> &ans,vector<int> &ds){
    if(ind==arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;;
    }
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        findcombination(ind,target-arr[ind],arr,ans,ds);
        ds.pop_back();

    }
    findcombination(ind+1,target,arr,ans,ds);

 }

 vector<vector<int>> combinationsum(vector<int>&candidate,int target){
    vector<vector<int>>ans;
    vector<int>ds;
    findcombination(0,target,candidate,ans,ds);
    return ans;
 }

 int main(){ 
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> ans = combinationsum(candidates, target);

    cout << "Combinations that sum to " << target << " are:\n";
    for (auto& vec : ans) {
        cout << "[ ";
        for (int num : vec) cout << num << " ";
        cout << "]\n";
    }
  system("pause");
    return 0;
 }