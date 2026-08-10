#include<bits/stdc++.h>
using namespace std;
vector<vector<string>>ans;
vector<string>path;
void backtrack(string &s,int start,vector<vector<bool>>&dp){
    if(start==s.size()){
        ans.push_back(path);
        return;
    }
    for(int end=start;end<s.size();end++){
        if(dp[start][end]){
            path.push_back(s.substr(start,end-start+1));
            backtrack(s,end+1,dp);
            path.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        int n =s.size();
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                if(s[i]==s[j]&&(j-i<=2||dp[i+1][j-1])){
                    dp[i][j]=true;
                }
            }
        }
        backtrack(s,0,dp);
        return ans;

        
    }
int main(){
    string s;
    cin>>s;
    vector<vector<string>>ans1;
    ans1=partition(s);
    for(int i=0;i<ans1.size();i++){
        for(int j=0;j<ans1[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}