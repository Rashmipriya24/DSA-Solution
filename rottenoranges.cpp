#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    int n;
    cin>>m>>n;
    vector<vector<int>>grid(m,vector<int>(n));
    queue<pair<int,int>>q;
    int fresh=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
            if(grid[i][j]==2){
                q.push({i,j});
            }
            else if(grid[i][j]==1){
                fresh++;

            }
        }
    }
    if(fresh==0){
        cout<<0<<endl;
        return 0;
    }
    int minutes=0;
    while(!q.empty()){
        int l = q.size();
        bool rotten = false;
        int dirx[4]={1,-1,0,0};
        int diry[4]={0,0,1,-1};
       for(int i=0;i<l;i++){
        auto p = q.front();
        q.pop();
       
       for(int k =0;k<4;k++){
        int newx=p.first+dirx[k];
        int newy=p.second+diry[k];
        if(newx>=0&&newy>=0&&newx<m&&newy<n&&grid[newx][newy]==1){
            grid[newx][newy]=2;
            q.push({newx,newy});
            rotten = true;
            fresh--;
        }
       }



    }
      if(rotten)minutes++;
}
    if(fresh==0){
        cout<<minutes<<endl;
        return 0;
    }
    else{
        cout<<"-1"<<endl;
        return 0;
    }
    return 0;


}