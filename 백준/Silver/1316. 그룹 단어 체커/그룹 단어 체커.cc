#include <bits/stdc++.h>
using namespace std;
string s;
int cnt[26],n,sum;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> s;
		char be='0';
		bool ch = true;
		for(int j=0;j<(int)s.length();j++){
			if(be==s[j]||!cnt[s[j]-97]) cnt[s[j]-97]=1;
			else ch = false;
			be = s[j];
		}
		if(ch) sum++;
		memset(cnt,0,sizeof(cnt));
	}
	cout << sum;
}