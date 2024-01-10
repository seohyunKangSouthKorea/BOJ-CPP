#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1002];
int n,m,u,v;
int main()
{
	cin >> n >> m;
	for(int i=0;i<m;i++){
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for(int i=1;i<=n;i++)	cout<<adj[i].size()<<'\n';
}
