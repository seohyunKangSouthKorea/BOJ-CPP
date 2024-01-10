#include <bits/stdc++.h>
using namespace std;

int mv[3] = {-1,1,2}; // x-1 x+1 2*x
int dist[100002]; // 수직선 0~100000까지 가능하니 넉넉히

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	cin >> n >> k;
	queue<int> q;

	fill(dist,dist+100001,-1); // 가능한 움직임 0~100000까지 100001개 -1로 초기화
	dist[n] = 0; // 초기값 방문후
	q.push(n); // 큐에 삽입

	while(!q.empty()){
		int cur = q.front(); q.pop();
		int tmp;
		for(int i=0;i<3;i++){
			if(i!=2)
				tmp = cur + mv[i];
			else tmp = cur*mv[i];
			if(tmp<0||tmp>100000) continue; // 이동은하지만 범위를 벗어나니까
			if(dist[tmp]>=0) continue; // 방문한것들은 중요! 제외
			dist[tmp] = dist[cur]+1;
			q.push(tmp);
		}
	}
	cout << dist[k]; // k위치의 가장 빠른 시간
}
