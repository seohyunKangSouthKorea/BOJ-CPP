#include <bits/stdc++.h>
using namespace std;

int board[102][102]; // 빨:0 초:1 파:2
int board2[102][102]; // 색맹
int vis[102][102];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string str[n];
	for(int i=0;i<n;i++){
		cin >> str[i];
		for(int j=0;j<n;j++){
			if(str[i][j]=='R'){
				board[i][j] = 0;
				board2[i][j]=0;
			}
			else if(str[i][j]=='G'){
				board[i][j]=1;
				board2[i][j]=0;
			}
			else if(str[i][j]=='B'){
				board[i][j]=2;
				board2[i][j]=1;
			}
		}
	}
	queue<pair<int,int>> q;
	int cnt = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(vis[i][j]==1) continue;
			vis[i][j]=1;
			q.push({i,j});
			cnt++;
			while(!q.empty()){
				auto cur = q.front(); q.pop();
				for(int k=0;k<4;k++){
					int px = cur.first+dx[k];
					int py = cur.second+dy[k];
					if(px<0||px>=n||py<0||py>=n) continue;
					if(board[px][py]!=board[cur.first][cur.second]||vis[px][py]==1) continue;
					vis[px][py] = 1;
					q.push({px,py});
				}
			}
		}
	}
	for(int i=0;i<n;i++) fill(vis[i],vis[i]+n,0);
	int cnt2=0;
	for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(vis[i][j]==1) continue;
				vis[i][j]=1;
				q.push({i,j});
				cnt2++;
				while(!q.empty()){
					auto cur = q.front(); q.pop();
					for(int k=0;k<4;k++){
						int px = cur.first+dx[k];
						int py = cur.second+dy[k];
						if(px<0||px>=n||py<0||py>=n) continue;
						if(board2[px][py]!=board2[cur.first][cur.second]||vis[px][py]==1) continue;
						vis[px][py] = 1;
						q.push({px,py});
					}
				}
			}
		}
	cout << cnt << ' ' << cnt2;
}
