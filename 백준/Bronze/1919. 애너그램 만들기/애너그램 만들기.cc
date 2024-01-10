#include <bits/stdc++.h>
using namespace std;

int alpha[26];
int aalpha[26];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string a,b;
	cin >> a >> b;
	int alen = a.length();
	for(int i=0;i<alen;i++){
		alpha[a[i]-97]++;
	}
	int blen = b.length();
	for(int i=0;i<blen;i++){
		aalpha[b[i]-97]++;
	}
	int sum =0;
	for(int i=0;i<26;i++){
		if(alpha[i]!=aalpha[i]){
			int mx = max(alpha[i],aalpha[i]);
			int mn = min(alpha[i],aalpha[i]);
			sum += mx-mn;
		}
	}
	cout << sum;
}
