#include <bits/stdc++.h>
using namespace std;
string s[5];
int mx;
int main()
{
	for(int i=0;i<5;i++){
		cin >> s[i];
		if(mx<(int)s[i].length()) mx = (int)s[i].length();
	}
	for(int i=1;i<=mx;i++){
		for(int j=0;j<5;j++){
			if((int)s[j].length()>=i) cout << s[j][i-1];
		}
	}
}