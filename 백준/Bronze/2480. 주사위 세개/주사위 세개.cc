#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a,b,c;
	cin >> a>>b>>c;
	int Max = max({a,b,c});
	int Min = min({a,b,c});
	int sum = a+b+c;

	if(Max==Min) cout << 10000+a*1000;
	else if(Max==(sum-Max-Min)) cout << 1000+Max*100;
	else if(Min==(sum-Max-Min)) cout << 1000+Min*100;
	else cout << Max*100;
}
