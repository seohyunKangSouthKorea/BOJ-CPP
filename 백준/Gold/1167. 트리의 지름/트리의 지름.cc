#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v[100002];
int n,fir,no,g,visited[100002],mn;
void bfs(int here){
	queue<int> q;
	visited[here] = 0;
	q.push(here);
	while(q.size()){
		int here = q.front(); q.pop();
		for(auto there:v[here]){
			if(visited[there.first]==-1){
				visited[there.first] = visited[here] + there.second;
				q.push(there.first);
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> fir;
		while(true){
			cin >> no;
			if(no==-1) break;
			cin >> g;
			v[fir].push_back({no,g});
		}
	}
	memset(visited,-1,sizeof(visited));
	bfs(1);
	for(int i=1;i<=n;i++){
		if(mn<visited[i]){
			mn = visited[i];
			no = i;
		}
	}
	memset(visited,-1,sizeof(visited));
	bfs(no);
	mn = 0;
	for(int i=1;i<=n;i++){
		if(mn<visited[i])    mn = visited[i];
	}
	cout << mn;
}