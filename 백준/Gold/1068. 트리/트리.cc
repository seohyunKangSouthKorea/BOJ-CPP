#include <bits/stdc++.h>
using namespace std;
vector<int> adj[52];
int n, er, root, in;
int cnt, visited[52];

void dfs(int here){
	visited[here]=1;
	if(adj[here].size()==1&&adj[here][0]==er)  cnt++;
	if(adj[here].size()==0)    cnt++;
	for(int there:adj[here]){
		if(there==er)    continue;
		if(visited[there]==0)    dfs(there);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> in;
		if(in==-1) root = i;
		else adj[in].push_back(i);
	}
	cin >> er;
	while(adj[er].size())	adj[er].pop_back();
	if(root!=er)    dfs(root);
	cout << cnt;
}
