#include <bits/stdc++.h>
using namespace std;
int h,w;
string a[102];
int visited[102][102];

void bfs(){
	queue<pair<int,int>> q;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(a[i][j]=='c'){
				visited[i][j]=0;
				q.push({i,j});
			}
		}
	}
	while(q.size()){
		pair<int,int> here = q.front(); q.pop();
		int ny = here.first;
		int nx = here.second + 1;
		if(ny<0||ny>=h||nx<0||nx>=w) continue;
		if(a[ny][nx]=='.'&&visited[ny][nx]==-1) {
			visited[ny][nx] = visited[here.first][here.second]+1;
			q.push({ny,nx});
		}
	}
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> h >> w;
	for(int i=0;i<h;i++){
		cin >> a[i];
	}
	for(int i=0;i<h;i++) fill(visited[i],visited[i]+w,-1);
	bfs();
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cout << visited[i][j] << ' ';
		}
		cout << '\n';
	}
}
