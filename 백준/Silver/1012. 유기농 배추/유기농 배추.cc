#include <bits/stdc++.h>
using namespace std;
int t, n, m, k,x,y;
int a[52][52], visited[52][52];
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};
void dfs(int y, int x){
	visited[y][x] = 1;
	for(int i=0;i<4;i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny<0||ny>=n||nx<0||nx>=m) continue;
		if(a[ny][nx] && visited[ny][nx]==0) dfs(ny, nx);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> t;
	for(int i=0;i<t;i++){
		int cnt=0;
		cin >> m >> n >> k;
		for(int j=0;j<k;j++){
			cin >> x >> y;
			a[y][x]=1;
		}
		for(int j=0;j<n;j++){
			for(int p=0;p<m;p++){
				if(a[j][p] && visited[j][p]==0){
					dfs(j, p);
					cnt++;
				}
			}
		}
		for(int j=0;j<n;j++) fill(a[j], a[j]+m, 0);
		for(int j=0;j<n;j++) fill(visited[j], visited[j]+m, 0);
		cout << cnt << '\n';
	}
}
