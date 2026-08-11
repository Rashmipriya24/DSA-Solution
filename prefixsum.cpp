#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    } 
    
        int sum=nums[0];
        unordered_set<int>st;
        for(int x:nums){
            st.insert(x);
        }
       
        if(n==1){
            cout<<(nums[0]+1);
            return 0;
        }
        for(int i =1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
               
            }
            else{
               break;
            }
        }
       while(st.find(sum)!=st.end()){
        sum++;
       }
        cout<<sum;
        return 0;
        
}