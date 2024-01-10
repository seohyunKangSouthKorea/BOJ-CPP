#include <bits/stdc++.h>
using namespace std;
int visited[2002],n,m,a,b;
vector<int> adj[2002];
bool check;
void dfs(int here,int depth){
    if(depth==5||check){
        check = true;
        return;
    }
    visited[here]=1;
    for(int there:adj[here]){
        if(visited[there]==0) dfs(there,depth+1);
    }
    visited[here]=0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=0;i<n;i++){
        dfs(i,1);
        if(check) break;
    }
    if(check) cout << 1;
    else cout << 0;
}