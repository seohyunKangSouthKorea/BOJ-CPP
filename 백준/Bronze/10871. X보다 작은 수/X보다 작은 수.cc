#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,x;
	cin >> n >> x;
	int in;
	for(int i=0;i<n;i++){
		cin >> in;
		if (in < x)
			cout << in << ' ';
	}
}
