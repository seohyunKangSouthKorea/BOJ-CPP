#include <bits/stdc++.h>
using namespace std;
map<char,int> mp;
int pl=3,cnt;
string a;
int main()
{
	for(int i=65;i<=90;i++){
		mp[char(i)] = pl;
		cnt++;
		if(cnt%3==0&&cnt<16) pl++;
		else if(cnt==19) pl++;
		else if(cnt==22) pl++;
	}
	cnt=0;
	cin >> a;
	for(int i=0;i<(int)a.length();i++){
		cnt += mp[a[i]];
	}
	cout << cnt;
}
