#include<bits/stdc++.h>
using namespace std;
void findrepeatingelements(vector<int>&arr){
    unordered_map<int,int> freq;
    for(auto &i : arr){
        freq[i]++;
    }
    cout<<"the repeating elements are:";
    for(auto&i :freq){
        if(i.second>1) cout<<i.first<< " ";
    }

}
int main(){
    vector<int>arr = { 1,2,3,4,4,5,3};
    findrepeatingelements(arr);
return 0;
}