#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int n,tmp,mx=-1000;
int main()
{
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(),v.end());
	do{
		int sum=0;
		for(int i=0;i<n-1;i++) sum += abs(v[i]-v[i+1]);
		mx = max(mx,sum);
	}while(next_permutation(v.begin(),v.end()));
	cout << mx;
}
