#include <bits/stdc++.h>
using namespace std;

map<string,int> mp;
int t,n,ret;
string f,s;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> n;
		ret=1;
		for(int j=0;j<n;j++){
			cin >> f >> s;
			mp[s]++;
		}
		for(auto k:mp) ret *= (k.second + 1);
		ret -= 1;
		cout << ret << '\n';
		mp.clear();
	}
}