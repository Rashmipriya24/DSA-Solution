#include<bits/stdc++.h>
using namespace std;
vector<int>hello(vector<int>&arr,int s,int n){
    int j = 1;
    int k = 1;
    int sum = 0;
 
    for(int k=1;k<=n;k++){
        sum+=arr[k];
        while(sum>s){
            sum-=arr[j];
            j++;
        }
        if(sum==s){
            return {j,k};
        }
    }
   
}
int main(){
    int n;
    int s;
    cin>>n;
    cin>>s;
    vector<int>arr(n+1);
    for(int i = 1;i<=n;i++){
        cin>>arr[i];

    }
    vector<int>o;
    o=hello(arr,s,n);
    for(int x:o){
        cout<<x<<" ";
    }
}