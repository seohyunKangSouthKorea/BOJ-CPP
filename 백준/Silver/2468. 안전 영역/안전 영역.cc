#include <bits/stdc++.h>
using namespace std;
int a[102][102], visited[102][102];
int n,min1=102,max1,ret=1;
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};
void dfs(int y, int x, int adj){
	visited[y][x] = 1;
	for(int i=0;i<4;i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny<0||ny>=n||nx<0||nx>=n) continue;
		if(a[ny][nx]>adj&&visited[ny][nx]==0)dfs(ny, nx, adj);
	}
}

int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
			max1 = max(max1,a[i][j]);
			min1 = min(min1,a[i][j]);
		}
	}

	for(int i=min1;i<max1;i++){
		int cnt = 0;
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				if(a[j][k]>i&&visited[j][k]==0){
					cnt++;
					dfs(j,k,i);
				}
			}
		}

		ret = max(ret,cnt);
		for(int j=0;j<n;j++) fill(visited[j],visited[j]+n,0);
	}
	cout << ret;
}
