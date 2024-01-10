#include <bits/stdc++.h>
using namespace std;
string a[27];
int visited[27][27],n,cnt;
vector<int> ret;
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};
void dfs(int y, int x){
	visited[y][x]=1;
	cnt++;
	for(int i=0;i<4;i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny<0||ny>=n||nx<0||nx>=n) continue;
		if(a[ny][nx]=='1'&&visited[ny][nx]==0) dfs(ny,nx);
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]=='1'&&visited[i][j]==0) {
				dfs(i,j);
			    ret.push_back(cnt);
			    cnt=0;
			}
		}
	}
	sort(ret.begin(),ret.end());
	cout << ret.size() << '\n';
	for(int i:ret) cout << i << '\n';
}
