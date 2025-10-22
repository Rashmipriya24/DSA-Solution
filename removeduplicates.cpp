#include<bits/stdc++.h>
using namespace std;
int removeduplicate(vector<int>nums){
    int n = nums.size();
    int j = 0;
    for(int i = 1;i<n;i++){
        if(nums[i]!=nums[j])
        {
            j++;
        nums[j]= nums[i];

        }
       
    }
    return j+1;
}
int main(){
    int n ;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    int k = removeduplicate(nums);
    cout<<k;

}