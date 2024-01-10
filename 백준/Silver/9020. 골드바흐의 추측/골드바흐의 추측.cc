#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	int n;

	for(int i=0;i<t;i++){
		cin >> n;
		vector<bool> b(n+1,true);
		vector<int> v;
		b[1] = false;
		for(int j=2;j*j<=n;j++){
			if(!b[j]) continue;
			for(int k=j*j;k<=n;k+=j){
				b[k] = false;
			}
		}
		for(int j=2;j<=n;j++)
			if(b[j]) v.push_back(j);
		int mn = 100000;
		int s1,s2;
		for(int j=0;j<(int)v.size();j++){
			if(b[n-v[j]]){
				if(mn > n-v[j]-v[j] && n-v[j]-v[j]>=0) {
					s1 = v[j];
					s2 = n-v[j];
					mn = n-v[j]-v[j];
				}
			}
		}
		cout << s1 << ' ' << s2 <<'\n';
	}
}
