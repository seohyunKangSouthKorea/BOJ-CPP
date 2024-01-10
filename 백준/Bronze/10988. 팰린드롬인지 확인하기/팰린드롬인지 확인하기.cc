#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for(int i=0;i<(int)s.length()/2;i++){
		if(s[i]!=s[(int)s.length()-1-i]) {
			cout << 0;
			return 0;
		}
	}
	cout << 1;
}
