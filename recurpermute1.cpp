#include<bits/stdc++.h>
using namespace std;
void recurpermute(vector<int>&ds,vector<int>&nums,vector<vector<int>>&ans,int freq[]){
    if(ds.size()==nums.size()){
        ans.push_back(ds);
        return;
    }
    for(int i = 0;i<nums.size();i++){
        if(freq[i]==0){
            ds.push_back(nums[i]);
                freq[i] = 1;
                recurpermute(ds,nums,ans,freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>&nums){
        vector<vector<int>>ans;
        vector<int>ds;
        int freq[nums.size()];
        for(int i = 0;i<nums.size();i++){
            freq[i]=0;
            
        }
        recurpermute(ds,nums,ans,freq);
        return ans;
    }

    int main(){
        vector<int>nums = {1,2,3};
       vector<vector<int>>result = permute(nums);
        for(auto &v : result) {
        for(int x : v) cout << x << " ";
        cout << endl;
    }
        return 0;
        

    }