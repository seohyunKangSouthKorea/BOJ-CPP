#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int vec[100];
	for(int i=0;i<n;i++){
		cin >> vec[i];
	}
	int v;
	cin >> v;
	int cnt = 0;
	for(int i=0;i<n;i++){
		if(v==vec[i]) cnt++;
	}
	cout << cnt;
}
