#include <bits/stdc++.h>
using namespace std;
int n,x,y;
vector<pair<int, int>> v;
bool cmp(pair<int,int> a, pair<int,int> b){
	if(a.second==b.second) return a.first < b.first;
	return a.second < b.second;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x >> y;
		v.push_back({x,y});
	}
	sort(v.begin(),v.end(),cmp);
	for(auto i:v)	cout << i.first << ' ' << i.second << '\n';
}
