#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int s;
	cin >> s;
	if(s>=90) cout << 'A';
	else if(s>=80) cout << 'B';
	else if(s>=70) cout << 'C';
	else if(s>=60) cout << 'D';
	else cout << 'F';
}
