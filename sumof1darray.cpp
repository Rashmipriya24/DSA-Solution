#include<bits/stdc++.h>
using namespace std;
vector<int>sumarray(vector<int> &nums){
    int n = nums.size();
    for(int i = 1;i<n;i++){
        nums[i]= nums[i]+nums[i-1];
    }
    return nums;
}

int main(){
    int n ;
    cout<<"enter no of elements";
    cin>>n;
    vector<int>nums(n);
    cout<<"enter elements";
    for(int i = 0;i<n;i++){
        cin>>nums[i];
       
    }
    vector<int>result = sumarray(nums);
    cout<<"running sum";
    for(int val:result){
        cout<< val << " ";
    }
    cout<<endl<< " ";
    return 0;
};
