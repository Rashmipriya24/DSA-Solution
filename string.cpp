#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    cin>>word;
    int n;
    cin>>n;
    vector<string>pattern(n);
    for(int i=0;i<n;i++){
        cin>>pattern[i];
    }
    int ans = 0;
    for(string &p:pattern){
        if(word.find(p)!=string::npos){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}