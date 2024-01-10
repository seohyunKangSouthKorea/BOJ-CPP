#include <bits/stdc++.h>
using namespace std;
int a[1026][1026],n,m,result;
int x,y,x2,y2,s[1026][1026];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i=1;i<n+1;i++){
		for(int j=1;j<n+1;j++){
			cin >> a[i][j];
		}
	}
	for(int i=1;i<n+1;i++){
		for(int j=1;j<n+1;j++){
			s[i][j] = s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
		}
	}

	for(int i=0;i<m;i++){
		cin >> x >> y >> x2 >> y2;
		result = s[x2][y2]-s[x-1][y2]-s[x2][y-1]+s[x-1][y-1];
		cout << result << '\n';
	}
}
