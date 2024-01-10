#include <bits/stdc++.h>
using namespace std;
#define x first         //first 를 편하게 x로
#define y second        //second를 편하게 y로

int board[52][52];
int dist[52][52];    // 방문O:1
int n, m;         // 행설정
int dx[8] = {-1,1,0,0,-1,-1,1,1}; // 상하좌우의 x좌표 변화값
int dy[8] = {0,0,-1,1,-1,1,-1,1}; // 상하좌우의 y좌표 변화값

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while(true){
		cin >> n >> m;
		if(n==0&&m==0) break;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin >> board[i][j];
			}
		}

		for(int i=0;i<m;i++) fill(dist[i],dist[i]+n,-1);

		queue<pair<int,int>> q;

		int cnt=0;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(board[i][j]!=1||dist[i][j]>=0) continue;
				dist[i][j] = 0;
				q.push({i,j});
				cnt++;
				while(!q.empty()){
					pair<int, int> cur = q.front(); q.pop();
					for(int k=0;k<8;k++){
						int px = cur.first + dx[k];
						int py = cur.second + dy[k];
						if(px<0||px>=m||py<0||py>=n) continue;
						if(dist[px][py]>=0||board[px][py]!=1) continue;
						dist[px][py] = dist[cur.first][cur.second]+1;
						q.push({px,py});
					}
				}
			}
		}
		cout << cnt <<'\n';
	}
}
