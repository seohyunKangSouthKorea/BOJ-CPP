#include <bits/stdc++.h>
using namespace std;

int n,m;
map<string,int> mp;
map<int,string> mp2;
string text;
int tmp;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	
	for(int i=1;i<=n;i++){
		cin >> text;
		mp.insert({text,i});
		mp2.insert({i,text});
	}
	
	for(int i=0;i<m;i++){
		cin >> text;
		if(atoi(text.c_str())!=0) cout << mp2[atoi(text.c_str())] << '\n';
		else cout << mp[text] << '\n';
	}
	
	return 0;
}
