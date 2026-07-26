#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
     vector<int>nums(n);
     for(int i = 0;i<n;i++){
        cin>>nums[i];
     }
     int mini1=INT_MAX;
        int mini2=INT_MAX;
        int max1=INT_MIN;
         int max2=INT_MIN;  
          int max3=INT_MIN;    
          for(int x:nums){
            if(x<=mini1){
                mini2=mini1;
                mini1=x;
            }
            else if(x<mini2){
            mini2=x;
            }
            if(x>=max1){
                max3=max2;
                max2=max1;
                max1=x;
            }
            else if(x>=max2){
                max3=max2;
                max2=x;
            }
            else if(x>max3){
                max3=x;
            }

          }  

          long long option1=1LL*max1*max2*max3;
          long long option3=1LL*max1*mini1*mini2;
          cout<<(int)max(option1,option3);
          return 0;
}