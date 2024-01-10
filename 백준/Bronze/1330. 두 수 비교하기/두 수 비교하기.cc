#include <bits/stdc++.h>
using namespace std;
int a,b;
int main()
{
	cin >> a >> b;
	string s = (a<b)?"<":((a==b)?"==":">");
	cout << s;
}
