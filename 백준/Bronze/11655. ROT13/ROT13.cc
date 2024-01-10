#include <bits/stdc++.h>
using namespace std;

int main() // 65-90(대) 97-122(소)
{
	string s;
	getline(cin, s);
	for(int i=0;i<(int)s.length();i++){
		if(islower(s[i])){
			if(s[i]+13>122) cout << char(s[i]-13);
			else cout << char(s[i]+13);
		}
		else if(isupper(s[i])){
			if(s[i]+13>90) cout << char(s[i]-13);
			else cout << char(s[i]+13);
		}
		else cout << s[i];
	}
}
