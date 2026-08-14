#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;

    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    
        int i =0;
        int j=0;
        int maxlength=0;
        unordered_map<int,int>mp;
        while(j<n){
            mp[nums[j]]++;
            while(mp[nums[j]]>k){
                mp[nums[i]]--;
                i++;
            }
            maxlength=max(maxlength,j-i+1);
            j++;
        }
        cout<< maxlength;
}