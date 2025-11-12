#include<bits/stdc++.h>
using namespace std;
void findcombination(int ind,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds){
    if(target==0){
        ans.push_back(ds);
        return;
    }
    for(int i = ind;i<arr.size();i++){
        if(i>ind && arr[i]==arr[i-1]) continue;
        if(arr[i]>target)break;
        ds.push_back(arr[i]);
        findcombination(i+1,target-arr[i],arr,ans,ds);
        ds.pop_back();
    }
}

vector<vector<int>> Combinationsum2(vector<int>&candidates, int target){
    sort(candidates.begin(),candidates.end());
    vector<vector<int>> ans;
    vector<int>ds;
   findcombination(0,target,candidates,ans,ds);
   return ans;
}

int main(){
    vector<int>candidates = { 1,2 ,1,2,1};
   int  target =4;
   vector<vector<int>>ans= Combinationsum2(candidates,target);
     cout << "Combinations that sum to " << target << " are:\n";
    for (auto& vec : ans) {
        cout << "[ ";
        for (int num : vec) cout << num << " ";
        cout << "]\n";
    }
  system("pause");
    return 0;


}