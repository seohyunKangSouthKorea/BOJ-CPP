#include <bits/stdc++.h>
using namespace std;
int n,mn;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	int cnt_t=0;
	int cnt_f=0;
	for(int j=2;j<=n;j*=2) cnt_t+=(n/j);
	for(int k=5;k<=n;k*=5) cnt_f+=(n/k);
	mn = min(cnt_t,cnt_f);
	cout << mn << '\n';
}
