#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    int a=INT_MIN;
    int b = INT_MAX;
    for(int i =0;i<n;i++){
        a=max(a,nums[i]);
        b=min(b,nums[i]);
    }
    while(b!=0){
        int rem = a%b;
        a=b;
        b=rem;
    }
    cout<<a;
    return 0;
}