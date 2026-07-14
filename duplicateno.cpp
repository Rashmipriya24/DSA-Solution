#include<bits/stdc++.h>
using namespace std;
int findduplicate(vector<int>&nums){
    int slow=nums[0];
    int fast=nums[0];
    do{
        slow=nums[slow];
        fast=nums[nums[fast]];
    
    }
    while(slow!=fast);
    int ptr1=nums[0];
    int ptr2=slow;
    while(ptr1!=ptr2){
        ptr1=nums[ptr1];
        ptr2=nums[ptr2];
    }
    return ptr1;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    cout<<findduplicate(nums);
    return 0;

}