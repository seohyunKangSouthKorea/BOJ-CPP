#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int y = 0;
	int m = 0;
	int tmp;
	for(int i=0;i<n;i++){
		cin >> tmp;
		y += (tmp/30)*10+10;
		m += (tmp/60)*15+15;
	}
	if(y>m) cout << "M " << m;
	else if(y<m) cout << "Y " << y;
	else cout << "Y M " << m;
}
