#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int v[3];
	int min=1000001, max=0;
	for(int i=0;i<3;i++){
		cin >> v[i];
		if(min>v[i])
			min = v[i];
		if(max<v[i])
			max = v[i];
	}
	/*
	int a,b,c;
	cin >> a>>b>>c;
	int Min = min({a,b,c});
	int Max = max({a,b,c});
	*/
	cout << min << ' ';
	cout << v[0]+v[1]+v[2]-min-max <<' ';
	/*
	for(int i=0;i<3;i++){
		if(v[i]!=min&&v[i]!=max)
			cout << v[i] << ' ';

	}
	*/
	cout << max;



}
