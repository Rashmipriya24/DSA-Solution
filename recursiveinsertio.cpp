#include<bits/stdc++.h>
using namespace std;
void recursiveInsertionsort(vector<int>&arr,int n){
    if(n<=1){
        return;
    }
    recursiveInsertionsort(arr,n-1);
    int last = arr[n-1];
    int j  = n-2;
    while(j>=0 && arr[j]>last){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}

int main(){
    vector<int>arr = {5,3,4,1};
    recursiveInsertionsort(arr,arr.size());
    for(int x :arr){
        cout<<x<<  " ";
    }
    return 0;

}