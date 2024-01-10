#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v[10002];
int visited[10002],n,pt,cd,ga,tn,mn;
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
	for(int i=0;i<n-1;i++){
		cin >> pt >> cd >> ga;
		v[pt].push_back({cd,ga});
		v[cd].push_back({pt,ga});
	}
	memset(visited,-1,sizeof(visited));
	bfs(1);
	for(int i=1;i<=n;i++){
		if(mn<visited[i]) {
			mn = visited[i];
			tn = i;
		}
	}
	memset(visited,-1,sizeof(visited));
	bfs(tn);
	mn = 0;
	for(int i=1;i<=n;i++){
		if(mn<visited[i])	mn = visited[i];
	}
	cout << mn;
}