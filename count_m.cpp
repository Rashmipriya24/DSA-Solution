#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int ans = 0;
    for(int i = 0;i<n;i++){
       int cnt = 0;
        for(int j =i;j<n;j++){
            if(arr[j]==target){
                cnt++;
            }
            int len = j-i+1;

            if(cnt>(len/2)){
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}