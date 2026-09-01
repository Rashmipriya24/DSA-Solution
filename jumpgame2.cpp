#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
        int jumps=0;
     
        int l=0;
        int r=0;
        while(r<n-1){
            int farthest=0;
            for(int index=l;index<=r;index++){
                farthest=max(farthest,index+nums[index]);
                 
            }
            l=r+1;
            r=farthest;
            jumps++;
        }
        cout<< jumps;
        
    }

