#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
 sort(nums.begin(),nums.end());
        int x = (nums[n-1]-1)*(nums[n-2]-1);
        cout<<x;
        return 0;
}