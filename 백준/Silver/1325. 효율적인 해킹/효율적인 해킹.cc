#include <bits/stdc++.h>
using namespace std;
vector<int> adj[10002];
int n,m,v,u,mx;
int dp[10002],visited[10002];
int dfs(int here){
	visited[here] = 1;
	int ret = 1;
	for(int there: adj[here]){
		if(visited[there]==0){
			ret += dfs(there);
		}
	}
	return ret;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i=0;i<m;i++){
		cin >> v >> u;
		adj[u].push_back(v);
	}
	for(int i=1;i<=n;i++) {
		memset(visited,0,sizeof(visited));
		dp[i] = dfs(i);
		mx = max(dp[i],mx);
	}
	for(int i=1;i<=n;i++) {
		if(mx == dp[i]) cout << i << ' ';
	}
}


