#include <bits/stdc++.h>
using namespace std;

int dx[8]={-2,-1,1,2,-2,-1,1,2};
int dy[8]={1,2,2,1,-1,-2,-2,-1};

int dist[302][302];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	int cur_x,cur_y;
	int des_x,des_y;

	cin >> t;
	queue<pair<int,int>> q;
	for(int i=0;i<t;i++){
		int n;
		cin >> n;
		cin >> cur_x >> cur_y;
		cin >> des_x >> des_y;
		for(int j=0;j<n;j++) fill(dist[j],dist[j]+n,-1);
		dist[cur_x][cur_y]=0;
		q.push({cur_x,cur_y});
		while(!q.empty()){
			auto cur = q.front(); q.pop();
			for(int k=0;k<8;k++){
				int px = cur.first+dx[k];
				int py = cur.second+dy[k];
				if(px<0||px>=n||py<0||py>=n) continue;
				if(dist[px][py]>=0) continue;
				dist[px][py]=dist[cur.first][cur.second]+1;
				q.push({px,py});
				if(px==des_x&&py==des_y) {
					cout << dist[px][py]<<'\n';
				}
			}
		}
		if(cur_x==des_x&&cur_y==des_y)
			cout << 0 << '\n';
	}
}
