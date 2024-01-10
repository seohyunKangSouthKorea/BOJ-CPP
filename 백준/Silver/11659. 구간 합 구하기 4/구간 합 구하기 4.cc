#include <bits/stdc++.h>
using namespace std;
int n,m,i,j,s[100002],a[100002];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i=1;i<n+1;i++) cin >> a[i];
	for(int i=1;i<n+1;i++) s[i] = s[i-1]+a[i];
	for(int x=0;x<m;x++){
		cin >> i >> j;
		cout << s[j]-s[i-1] << '\n';
	}
}