#include<bits/stdc++.h>
using namespace std;
void reversearray(vector<int> &arr,int m){
    int start = m+1;
    int end = arr.size()-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int n ,m;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    reversearray(arr,m);

    for(int i = 0;i<n;i++){
        cout<< arr[i]<< " ";
    }
    return 0;
}