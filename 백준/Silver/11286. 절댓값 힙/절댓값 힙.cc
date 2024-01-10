#include <bits/stdc++.h>
using namespace std;
long long tmp,n;
struct cmp{
	bool operator()(int a, int b){
		int fir = abs(a);
		int sec = abs(b);
		if(fir==sec) return a>b;
		else return fir>sec;
	}
};
priority_queue<int,vector<int>,cmp> pq;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> tmp;
		if(tmp)	pq.push(tmp);
		else {
			if(pq.size()){
				cout << pq.top() << '\n';
				pq.pop();
			}
			else cout << 0 << '\n';
		}
	}
}