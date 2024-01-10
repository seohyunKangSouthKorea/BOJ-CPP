#include <bits/stdc++.h>
using namespace std;

int alpha[26];
int aalpha[26];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	int cnt;
	for(int i=0;i<t;i++){
		cnt=0;
		string a,b;
		cin >> a >> b;
		int n = a.length();
		int m = b.length();
		for(int j=0;j<n;j++)
			alpha[a[j]-97]++;
		for(int j=0;j<m;j++)
			aalpha[b[j]-97]++;
		for(int j=0;j<26;j++){
			if(alpha[j]!=aalpha[j]) {
				cout << "Impossible\n";
				cnt++;
				break;
			}
		}
		if(cnt==0)
			cout << "Possible\n";
		fill(alpha,alpha+26,0);
		fill(aalpha,aalpha+26,0);
	}
}
