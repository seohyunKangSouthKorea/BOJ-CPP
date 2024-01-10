#include <bits/stdc++.h>
using namespace std;
int n,m,visited[102][102],ret;
string a[102];
const int dy[] = {1,0,-1,0};
const int dx[] = {0,1,0,-1};

void bfs(int y, int x){
	queue<pair<int,int>> q;
	visited[y][x]=1;
	q.push({y,x});
	while(q.size()){
		auto here = q.front(); q.pop();
		for(int i=0;i<4;i++){
			int ny = here.first+dy[i];
			int nx = here.second+dx[i];
			if(ny<0||ny>=n||nx<0||nx>=m)	continue;
			if(a[ny][nx]=='1'&&visited[ny][nx]==0){
				visited[ny][nx] = visited[here.first][here.second]+1;
				q.push({ny,nx});
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	bfs(0,0);
	cout << visited[n-1][m-1];
}
