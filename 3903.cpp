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
    int maximum=INT_MIN;
        vector<int>suffixmin(n);
        suffixmin[n-1]=nums[n-1];
        for(int i = n-2;i>=0;i--){
            suffixmin[i]=min(nums[i],suffixmin[i+1]);
        }
        for(int i =0;i<n;i++){
            maximum=max(maximum,nums[i]);
            int score= maximum-suffixmin[i];
            if(score<=k){
                cout<<i<<endl;
                return 0;
            }
        }
        cout<< -1<<endl;
        return 0;
}