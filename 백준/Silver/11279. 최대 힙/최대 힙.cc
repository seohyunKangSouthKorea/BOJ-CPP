#include <bits/stdc++.h>
using namespace std;
priority_queue<int> pt;
int n,tmp;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> tmp;
		if(tmp) pt.push(tmp);
		else {
			if(pt.size()){
				cout << pt.top() << '\n';
				pt.pop();
			}
			else cout << 0 << '\n';
		}
	}
}
