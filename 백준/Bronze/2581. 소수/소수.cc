#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,m;
	cin >> n >> m;
	vector<int> v;
	vector<bool> b(m+1,true);
	b[1] = false;
	for(int i=2;i*i<=m;i++){
		if(!b[i]) continue;
		for(int j=i*i;j<=m;j+=i){
			b[j] = false;
		}
	}

	int sum=0;
	int min = 10001;
	for(int i=n;i<=m;i++){
		if(b[i]) {
			sum+=i;
			if(min>i) min = i;
		}
	}
	if(sum!=0&&min!=10001)
		cout << sum <<'\n' <<min;
	else
		cout << -1;
}
