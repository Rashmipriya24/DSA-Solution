#include<bits/stdc++.h>
using namespace std;
int pivotindex(vector<int>&arr){
    int n = arr.size();
    for(int i = 0;i<n;i++){
        int leftsum = 0;
        int rightsum = 0;
        for(int j = 0;j<i;j++){
            leftsum+=arr[j];
        }
        for(int k = i+1;k<n;k++){
            rightsum+=arr[k];
        }
        if(leftsum==rightsum){
            return i;
        }
    }
    return -1;
}

int main(){
    int n ;
    cin>>n;
 vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];

    }

cout<<pivotindex(arr);
}