#include <bits/stdc++.h>
using namespace std;
int m,n,k,cnt;
int x, x2, y, y2;
int a[102][102], visited[102][102];
vector<int> ret;
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};
void dfs(int y, int x){
	visited[y][x]=1;
	for(int i=0;i<4;i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny<0||ny>=n||nx<0||nx>=m) continue;
		if(a[ny][nx]==0&&visited[ny][nx]==0){
			cnt++;
			dfs(ny,nx);
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> m >> n >> k;
	for(int i=0;i<k;i++){
		cin >> x >> y >> x2 >> y2;
		for(int j=x;j<x2;j++){
			for(int p=y;p<y2;p++){
				a[j][p] = 1;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==0&&visited[i][j]==0) {
				dfs(i,j);
				ret.push_back(cnt+1);
				cnt = 0;
			}
		}
	}
	sort(ret.begin(),ret.end());
	cout << ret.size() << '\n';
	for(int i:ret) cout << i << ' ';
}
