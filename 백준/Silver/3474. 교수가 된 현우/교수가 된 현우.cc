#include <bits/stdc++.h>
using namespace std;
int t,n;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> n;
		int cnt_2=0;
		int cnt_5=0;
		for(int j=2;j<=n;j*=2) cnt_2+=(n/j);
		for(int k=5;k<=n;k*=5) cnt_5+=(n/k);
		int mn = min(cnt_2,cnt_5);
		cout << mn << '\n';
	}
}
