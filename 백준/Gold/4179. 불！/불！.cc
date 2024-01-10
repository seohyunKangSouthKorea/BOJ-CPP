#include <bits/stdc++.h>
using namespace std;

string board[1002];
int dist[1002][1002];

int dx[4] = {-1,1,0,0}; // 상하좌우의 x좌표 변화값
int dy[4] = {0,0,-1,1}; // 상하좌우의 y좌표 변화값;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int r,c;
	cin >> r >> c;
	queue<pair<int,int>> q;
	int x,y;
	int real=0;
	for(int i=0;i<r;i++){
		cin >> board[i];
		for(int j=0;j<c;j++){
			if(board[i][j]=='.') {
				dist[i][j]=-1;
			}
			else if(board[i][j]=='F'){
				dist[i][j]=0;
				q.push({i,j});
				real = 1;
			}
			else if(board[i][j]=='J'){
				dist[i][j]=-1;
				x = i;
				y = j;
			}
		}
	}

	while(!q.empty()){
		pair<int, int> cur = q.front(); q.pop();
		for(int i=0;i<4;i++) {
			int px = cur.first + dx[i];
		    int py = cur.second + dy[i];
		    if(px<0||px>=r||py<0||py>=c) continue;
		    if(dist[px][py]>=0) continue;
		    dist[px][py] = dist[cur.first][cur.second]+1;
		    q.push({px,py});
		}
	}

	dist[x][y]=0;
	q.push({x,y});
	while(!q.empty()){
		pair<int, int> cur = q.front(); q.pop();
		for(int i=0;i<4;i++) {
			int px = cur.first + dx[i];
		    int py = cur.second + dy[i];
			if(px<0||px>=r||py<0||py>=c) {
				cout << dist[cur.first][cur.second]+1;
				return 0;
			}
		    if(real==1){
				if(dist[cur.first][cur.second]+1>=dist[px][py])
					continue;
		    }
		    else{
			    if(dist[px][py]>=0) continue;
			    dist[px][py] = dist[cur.first][cur.second]+1;
		    }
		    dist[px][py] = dist[cur.first][cur.second]+1;
		    q.push({px,py});
		}
	}
	cout << "IMPOSSIBLE";
}
