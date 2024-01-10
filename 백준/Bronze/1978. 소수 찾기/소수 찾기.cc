// 연립합동방정식

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int a;
	cin >> n;
	vector<int> v;
	int max=-1;
	for(int i=0;i<n;i++){
		cin >> a;
		v.push_back(a);
		if(max<a)
			max = a;
	}
	vector<bool> b(max+1,true);
	b[1]=false;
	for(int i=2;i*i<=max;i++){
		if(!b[i]) continue;
		for(int j=i*i;j<=max;j+=i){
			b[j] = false;
		}
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(b[v[i]])
			cnt++;
	}
	cout << cnt;
}
