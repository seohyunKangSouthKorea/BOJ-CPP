#include <bits/stdc++.h>
using namespace std;
int c, tw, u,v, visited[102];
vector<int> adj[102];

int dfs(int here){
	visited[here] = 1;
	int ret = 1;
	for(int there:adj[here]){
		if(visited[there]==0) ret += dfs(there);
	}
	return ret;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> c >> tw;
	for(int i=0;i<tw;i++){
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	cout << dfs(1)-1;
}
