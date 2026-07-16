#include<bits/stdc++.h>
using namespace std;
int countsetbits(int n){
    int p = 0;
    if(n==0){
        return 0;
    }
    while(n>0){
        if(n&1){
            p++;
        }
       n= n>>1;
    }
    return p;
}
vector<int>countBits(int n){
    vector<int>ans(n+1);
    for(int i =0;i<=n;i++){
        ans[i]=countsetbits(i);
    }
    return ans;
}
int main(){
    int n ;
    cin>>n;
    vector<int>s=countBits(n);
    for(int i = 0;i<=n;i++){
        cout<<s[i]<<" ";
    }
}