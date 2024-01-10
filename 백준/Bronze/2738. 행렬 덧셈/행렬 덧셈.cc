#include <bits/stdc++.h>
using namespace std;
int a[102][102],tmp,n,m;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> a[i][j];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) {
			cin >> tmp;
			cout << tmp+a[i][j] << ' ';
		}
		cout << '\n';
	}
}