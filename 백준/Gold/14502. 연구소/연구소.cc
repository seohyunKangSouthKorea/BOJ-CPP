#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> jya; // 0좌표
vector<pair<int, int>> virus;
int a[10][10],n,m,cnt;
int visited[10][10];
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};
int bfs(){
	int ret = 0;
	queue<pair<int, int>> q;
	for(auto vir:virus){
		visited[vir.first][vir.second] = 2;
		q.push({vir.first,vir.second});
	}
	while(q.size()){
		pair<int, int> here = q.front(); q.pop();
		for(int i=0;i<4;i++){
			int ny = here.first + dy[i];
			int nx = here.second + dx[i];
			if(ny<0||ny>=n||nx<0||nx>=m) continue;
			if(a[ny][nx]==0&&visited[ny][nx]==0){
				visited[ny][nx] = 2;
				q.push({ny,nx});
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==0&&visited[i][j]==0) ret++;
		}
	}
	return ret;
}
int main()
{
	cin >> n >> m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
			if(a[i][j]==0) jya.push_back({i,j});
			else if(a[i][j]==2) virus.push_back({i,j});
		}
	}
	for(int i=0;i<(int)jya.size();i++){
		for(int j=i+1;j<(int)jya.size();j++){
			for(int k=j+1;k<(int)jya.size();k++){
				pair<int, int> fir = jya[i];
				pair<int, int> sec = jya[j];
				pair<int, int> thr = jya[k];
				a[fir.first][fir.second] = 1;
				a[sec.first][sec.second] = 1;
				a[thr.first][thr.second] = 1;
				cnt = max(cnt,bfs());
				for(int p=0;p<n;p++) fill(visited[p],visited[p]+m,0);
				a[fir.first][fir.second] = 0;
				a[sec.first][sec.second] = 0;
				a[thr.first][thr.second] = 0;
 			}
		}
	}
	cout << cnt;
}
