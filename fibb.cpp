#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
     if(n<=1){
            cout<<n;
            return 0;
        }
        int curr=0;
        int prev1=0;
        int prev2=1;
        for(int i =2;i<=n;i++){
            curr=prev1+prev2;
            prev1=prev2;
            prev2=curr;
        }
        cout<<prev2;
        return 0;

}