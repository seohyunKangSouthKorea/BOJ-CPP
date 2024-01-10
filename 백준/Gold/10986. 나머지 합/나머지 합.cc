#include <bits/stdc++.h>
using namespace std;
int n,m,a[1000002];
long long s[1000002], ret;
map<int, int> mp;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i=1;i<n+1;i++)	cin >> a[i];
	for(int i=1;i<n+1;i++)	s[i] = s[i-1]+a[i];
	for(int i=1;i<n+1;i++)	{
		s[i] = s[i]%m;
		mp[s[i]]++;
	}
	if(mp.find(0)!=mp.end())	ret+=mp[0];
	for(auto t:mp){
		for(int i=0;i<t.second;i++){
			for(int j=i+1;j<t.second;j++){
				ret++;
			}
		}
	}
	cout << ret;
}
