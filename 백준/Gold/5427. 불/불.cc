#include <bits/stdc++.h>
using namespace std;

int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

string board;

int fdist[1001][1001];
int sdist[1001][1001];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	int w,h;
	cin >> t;
	queue<pair<int, int>> f;
	queue<pair<int, int>> s;
	for(int i=0;i<t;i++){
		cin >> w >> h;

		for(int j=0;j<h;j++) fill(fdist[j],fdist[j]+w, 0);
		for(int j=0;j<h;j++) fill(sdist[j],sdist[j]+w, 0);

		for(int j=0;j<h;j++){
			cin >> board;
			for(int k=0;k<w;k++){
				if(board[k]=='*'){
					sdist[j][k]=-1;
					f.push({j,k});
				}
				else if(board[k]=='@'){
					fdist[j][k]=-1;
					s.push({j,k});
				}
				else if(board[k]=='.'){
					fdist[j][k]=-1;
					sdist[j][k]=-1;
				}
			}
		}
		// 세팅

		// 불의 이동
		while(!f.empty()){
			pair<int, int> cur = f.front(); f.pop();
			for(int j=0;j<4;j++){
				int px = cur.first + dx[j];
				int py = cur.second + dy[j];
				if(px<0||px>=h||py<0||py>=w) continue;
				if(fdist[px][py]>=0) continue;
				fdist[px][py] = fdist[cur.first][cur.second]+1;
				f.push({px,py});
			}
		}

		// 상근이의 이동
		int cnt = 0;
		while(!s.empty()){
			pair<int, int> cur = s.front(); s.pop();
			for(int j=0;j<4;j++){
				int px = cur.first + dx[j];
				int py = cur.second + dy[j];
				if(px<0||px>=h||py<0||py>=w) {
					cout << sdist[cur.first][cur.second]+1<<'\n';
					cnt++;
					break;
				}
				if(sdist[px][py]>=0) continue;
				if(fdist[px][py]!=-1 && fdist[px][py]<=sdist[cur.first][cur.second]+1) continue;
				sdist[px][py] = sdist[cur.first][cur.second]+1;
				s.push({px,py});
			}
			if(cnt>0)
				break;
		}
		while(!s.empty())
			s.pop();
		if(cnt==0)
			cout << "IMPOSSIBLE\n";
	}
}
