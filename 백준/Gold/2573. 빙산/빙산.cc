#include <bits/stdc++.h>
using namespace std;
int a[302][302],x,n,m,cnt;
int visited[302][302],fir;
vector<pair<int,int>> v;
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};
void dfs(int y, int x){
	visited[y][x] = 1;
	for(int i=0;i<4;i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny<1||ny>n-1||nx<1||nx>m-1) continue;
		if(a[ny][nx]>0&&visited[ny][nx]==0) dfs(ny,nx);
	}
}

void bfs(){
	queue<pair<int, int>> q;
	vector<pair<int,int>> x;
	for(auto i:v) {
		if(a[i.first][i.second]<=0) continue;
		q.push({i.first,i.second});
	}
	while(q.size()){
		pair<int, int> here = q.front();q.pop();
		for(int i=0;i<4;i++){
			int ny = here.first+dy[i];
			int nx = here.second+dx[i];
			if(a[ny][nx]==-1&&a[here.first][here.second]>0) a[here.first][here.second]--;
			if(a[here.first][here.second]==0) {
				x.push_back({here.first,here.second});
				break;
			}
		}
	}
	for(auto i:x) a[i.first][i.second]=-1;
}

bool check(){
	int ch=0;
	for(int i=1;i<n-1;i++){
		for(int j=1;j<m-1;j++){
			if(fir==0&&a[i][j]>0) v.push_back({i,j});
			if(a[i][j]>0&&visited[i][j]==0) {
				cnt++;
				ch = a[i][j];
				dfs(i,j);
			}
		}
	}
	if(ch!=0) return true;
	return false;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> x;
			if(x==0) a[i][j]=-1;
			else a[i][j]=x;
		}
	}
	while(check()){
		if(cnt>=2) {
			cout << fir;
			return 0;
		}
		cnt=0;
		memset(visited,0,sizeof(visited));
		bfs();
		fir++;
	}
	cout << cnt;
}
