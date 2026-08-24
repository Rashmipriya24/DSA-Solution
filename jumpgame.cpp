#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
     int maxreach=0;
        for(int i =0;i<nums.size();i++){
            if(i>maxreach){
                cout<<" false";
                return 0;
            }
            maxreach=max(maxreach,i+nums[i]);
            if(maxreach>= nums.size()-1){
                cout<<" true";
                return 0;
            }
        }
        cout<<"true";
        
}