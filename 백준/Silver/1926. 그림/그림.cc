
#include <bits/stdc++.h>
using namespace std;
#define x first         //first 를 편하게 x로
#define y second        //second를 편하게 y로

int board[502][502];

bool vis[502][502];    // 방문O:1
int n, m;         // 행설정
int dx[4] = {-1,1,0,0}; // 상하좌우의 x좌표 변화값
int dy[4] = {0,0,-1,1}; // 상하좌우의 y좌표 변화값

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> board[i][j];
		}
	}
	int cnt=0;
	int cnt2;
	int max=0;
	queue<pair<int, int>> q;  // pair<int, int>형을 넣을 큐 선언
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(board[i][j]!=1||vis[i][j]==1) continue;
			cnt++;
			vis[i][j] = 1; // 시작주소는 0,0으로 하고 0,0을 방문했다는 표시 1넣음
			q.push({i,j}); // 방문한 좌표는 위에선언한 큐에 push
			cnt2=0;
			while(!q.empty()){ // 큐가 비어 있을 때 까지반복: pop하고 pop한 좌표의 상하좌우찾고 응당한 좌표 큐에넣고..
				pair<int, int> cur = q.front(); q.pop();
				cnt2++;
				for(int k=0;k<4;k++){
					int px = cur.x + dx[k];
					int py = cur.y + dy[k];
					if(px < 0||px >= n||py < 0||py >= m) continue;
					if(board[px][py]!=1||vis[px][py]==1) continue;
					vis[px][py] = 1;
					q.push({px,py});
				}
			}
			if(max<cnt2) max = cnt2;
		}
	}
	cout << cnt << '\n' << max;
}
