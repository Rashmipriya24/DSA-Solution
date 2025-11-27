#include<bits/stdc++.h>
using namespace std;
  
  void solve(int i,int j,vector<vector<int>>&maze,int n,vector<string>&ans,string move,vector<vector<int>>&vis){
      if(i==n-1 &&j ==n-1){
          ans.push_back(move);
          return;
      }
      vis[i][j]=1;
      string dir = "DLRU";
      
        int di[] = {1, 0, 0, -1};
        int dj[] = {0, -1, 1, 0};
      for(int ind = 0;ind<4;ind++){
          int nexti= i+di[ind];
          int nextj = j+dj[ind];
          if(nexti>=0 && nextj>=0&&nexti<n&& nextj<n&&!vis[nexti][nextj]&&maze[nexti][nextj]==1){
              vis[nexti][nextj]=1;
              solve(nexti,nextj,maze,n,ans,move+dir[ind],vis);
              vis[nexti][nextj]=0;
             
          }
      }
       vis[i][j]=0;
  }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string>ans;
        int n = maze.size();
        vector<vector<int>>vis(n,vector<int>(n,0));
        int di[]={+1,0,0,-1};
        int dj[]={0,-1,1,0};
        if(maze[0][0]==1) solve(0,0,maze,n,ans,"",vis);
        return ans;
    }
int main(){
    int n;
    cin>>n;
    vector<vector<int>>maze(n,vector<int>(n));
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> maze[i][j];
        }
    }
    vector<string>result = ratInMaze(maze);
    
    if (result.empty()) {
        cout << "No Path Exists\n";
    } else {
        cout << "Paths:\n";
        for (auto &path : result) {
            cout << path << "\n";
        }
    }

    return 0;

}