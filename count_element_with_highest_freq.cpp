#include<bits/stdc++.h>
using namespace std;
int totalfreq(vector<int>nums){
    unordered_map<int,int> freq;
    for(int num:nums){
        freq[num]++;
    }
    int maxfreq = 0;
    for(auto &it:freq){
        maxfreq = max(maxfreq , it.second);

    }
    int totalfreq = 0;
    for(auto &it :freq){
        if(maxfreq == it.second){
            totalfreq += maxfreq;
        }
     
    }
       return totalfreq;

}

int main(){
    int n ;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    int ans = totalfreq(nums);
    cout<<ans;
}