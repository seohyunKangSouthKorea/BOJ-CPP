#include <bits/stdc++.h>
using namespace std;
int n,x;
struct cmp{
	bool operator()(int a, int b){
		return a>b;
	}
};
priority_queue<int,vector<int>,cmp> pq;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		if(x) pq.push(x);
		else {
			if(pq.size()){
				cout << pq.top() << '\n';
				pq.pop();
			}
			else cout << 0 << '\n';
		}
	}
}