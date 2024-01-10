#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1002];
int n,m,u,v,visited[1002],cnt;
void dfs(int here){
	visited[here]=1;
	for(int there:adj[here]){
		if(visited[there]==0) dfs(there);
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i=0;i<m;i++){
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for(int i=1;i<=n;i++){
		if(visited[i]==0){
			dfs(i);
			cnt++;
		}
	}
	cout << cnt;
}
