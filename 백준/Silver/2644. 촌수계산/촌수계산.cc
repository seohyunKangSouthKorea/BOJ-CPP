#include <bits/stdc++.h>
using namespace std;
int n, f, s,m;
int u,v, visited[102];
vector<int> adj[102];

void bfs(int here){
	queue<int> q;
	visited[here] = 1;
	q.push(here);
	while(q.size()){
		int ch = q.front(); q.pop();
		for(int there:adj[ch]){
			if(visited[there]==0) {
				visited[there] = visited[ch]+1;
				q.push(there);
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> f >> s >> m;
	for(int i=0;i<m;i++){
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	bfs(f);
	cout << visited[s]-1;
}
