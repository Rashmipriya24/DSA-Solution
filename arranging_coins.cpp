#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long low=1;
        long long high=n;
        int ans=0;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long coins=mid*(mid+1)/2;
            if(coins<=n){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }

        }
        cout<<ans;
    
}