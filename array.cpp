
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>ans(n);
    for(int i =0;i<n;i++){
        int leftsum = 0;
        for(int j =0;j<i;j++){
            leftsum+=nums[j];
        }
        int rightsum = 0;
        for(int j=i+1;j<n;j++){
            rightsum+=nums[j];
        }
        ans[i]=abs(leftsum-rightsum);
    }
    for(int i = 0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}