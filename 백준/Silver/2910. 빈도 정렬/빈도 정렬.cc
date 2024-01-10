#include <bits/stdc++.h>
using namespace std;
int n,c,tmp;
map<int, int> mp;
map<int, int> mp2;
vector<pair<int, int>> v;

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.first==b.first)
		return mp2[a.second] < mp2[b.second];
	return a.first > b.first;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> c;
	for(int i=0;i<n;i++){
		cin >> tmp;
		mp[tmp]++;
		if(mp2.find(tmp)==mp2.end()) mp2[tmp]=i;
	}
	for(auto i:mp)	v.push_back({i.second,i.first});
	sort(v.begin(),v.end(),cmp);
	for(auto i:v){
		while(i.first--){
			cout << i.second << ' ';
		}
	}
}
