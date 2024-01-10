#include <bits/stdc++.h>
using namespace std;
int n,st=1,ed=1,cnt=1,sum=1;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	while(ed<n){
		if(sum==n){
			cnt++;
			ed++;
			sum+=ed;
		}
		else if(sum<n){
			ed++;
			sum+=ed;
		}
		else {
			sum-=st;
			st++;
		}
	}
	cout << cnt;
}