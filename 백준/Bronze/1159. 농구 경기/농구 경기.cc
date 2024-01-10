#include <bits/stdc++.h>
using namespace std;

int cnt[26];

int main()
{
	int n;
	string s;
	cin >> n;

	for(int i=0;i<n;i++){
		cin >> s;
		cnt[s[0]-97]++;
	}
	bool check = false;
	for(int i=0;i<26;i++){
		if(cnt[i]>=5){
			cout << char(i+97);
			check = true;
		}
	}
	if(check==false) cout << "PREDAJA";

}
