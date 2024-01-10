#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1002];
int n,m,v,u1,u2;
bool visited[1002];

void dfs(int here){
	visited[here] = 1;
	cout << here << ' ';
	sort(adj[here].begin(),adj[here].end());
	for(int there:adj[here]){
		if(visited[there]==0) dfs(there);
	}
}

void bfs(int here){
	queue<int> q;
	visited[here] = 1;
	q.push(here);
	cout << here << ' ';
	while(q.size()){
		int no = q.front(); q.pop();
		sort(adj[no].begin(),adj[no].end());
		for(int there:adj[no]){
			if(visited[there]==0) {
				visited[there] = 1;
				q.push(there);
				cout << there << ' ';
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> v;
	for(int i=0;i<m;i++){
		cin >> u1 >> u2;
		adj[u1].push_back(u2);
		adj[u2].push_back(u1);
	}
	dfs(v);
	cout << '\n';
	fill(visited,visited+(n+1),0);
	bfs(v);
}
