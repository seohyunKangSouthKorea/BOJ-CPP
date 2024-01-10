#include <bits/stdc++.h>
using namespace std;
int n,m,a[15002],cnt;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i=1;i<n+1;i++) cin >> a[i];
	sort(a,a+n+1);
	int st=1;
	int ed=n;
	while(st<ed){
		if(a[st]+a[ed]==m) {
			cnt++;
			st--;
			ed--;
		}
		else if(a[st]+a[ed]>m)    ed--;
		else	st++;
	}
	cout << cnt;
}