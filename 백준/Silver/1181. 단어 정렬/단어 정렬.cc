#include <bits/stdc++.h>
using namespace std;
int n;
string tmp;
vector<string> v;
bool cmp(string a, string b){
	if(a.size()==b.size()) return a<b;
	return a.size() < b.size();
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(),v.end(),cmp);
	v.erase(unique(v.begin(),v.end()),v.end());
	for(auto i:v)	cout << i << '\n';
}
