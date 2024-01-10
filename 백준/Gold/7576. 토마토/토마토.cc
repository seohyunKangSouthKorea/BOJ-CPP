#include <bits/stdc++.h>
using namespace std;
#define x first
#define y second
int board[1002][1002];
int dist[1002][1002];
int n,m;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> m >> n;
	queue<pair<int,int>> q;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> board[i][j];
			if(board[i][j]==1){
				q.push({i,j}); // 익은것과 아계아닌게 dist값 0
			}
			else if(board[i][j]==0){
				dist[i][j] = -1;
			}
		}
	}
	while(!q.empty()){
		auto cur = q.front(); q.pop();
		for(int k=0;k<4;k++){
			int px = cur.x + dx[k];
			int py = cur.y + dy[k];
			if(px<0||px>=n||py<0||py>=m) continue;
			if(dist[px][py]>=0) continue;
			dist[px][py] = dist[cur.x][cur.y]+1;
			q.push({px,py});
		}
	}
	int max=-22;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(dist[i][j]==-1) {
				max=-1;
			}
			if(max<dist[i][j]&&max!=-1)
				max = dist[i][j];
		}
	}
	cout << max;

}
