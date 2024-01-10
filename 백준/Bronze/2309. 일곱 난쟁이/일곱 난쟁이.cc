#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int v[9];
	int sum = 0;
	for(int i=0;i<9;i++){
		cin >> v[i];
		sum += v[i];
	}
	sort(v,v+9);
	int e1,e2;
	for(int i=0;i<9;i++){
		for(int j=i+1;j<9;j++){
			if(sum-v[i]-v[j]==100){
				e1 = i;
				e2 = j;
				break;
			}
		}
	}
	for(int i=0;i<9;i++){
		if(i!=e1&&i!=e2)
			cout << v[i] <<'\n';
	}
}
