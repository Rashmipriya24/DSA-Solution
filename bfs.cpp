#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e;
    cin>>n>>e;
    vector<vector<int>>adj(n);
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int source,destination;
    cin>>source>>destination;
    vector<bool>visited(n,false);
    queue<int>q;
    q.push(source);
    visited[source]=true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        if(node==destination){
            cout<<true<<endl;
            return 0;
        }
        for(int neighbour: adj[node]){
            if(!visited[neighbour]){
                visited[neighbour]=true;
                q.push(neighbour);
            }
        }

    }
    cout<<false<<endl;
    return 0;
}