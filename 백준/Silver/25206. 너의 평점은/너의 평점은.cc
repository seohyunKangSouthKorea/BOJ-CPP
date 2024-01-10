#include <bits/stdc++.h>
using namespace std;
string s,d;
map<char,double> mp;
double ha,sum,hasum;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	mp['A'] = 4.0;
	mp['B'] = 3.0;
	mp['C'] = 2.0;
	mp['D'] = 1.0;
	mp['F'] = 0.0;
	mp['+'] = 0.5;
	mp['0'] = 0.0;
	for(int i=0;i<20;i++){
		cin >> s >> ha >> d;
		if(d=="P") continue;
		double g = mp[d[0]]+mp[d[1]];
		sum += ha*g;
		hasum += ha;
	}
	cout << fixed;
	cout.precision(6);
	cout << sum/hasum;
}