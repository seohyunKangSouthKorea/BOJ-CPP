// 연립합동방정식

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,k;
	cin >> n >> k;
	vector<bool> b(n+1,true);
	b[1]=false;
	int cnt=0;
	for(int i=2;i<=n;i++){
		if(!b[i]) continue;
		for(int j=i;j<=n;j+=i){
			if(b[j]!=false){
				b[j] = false;
				cnt++;
			}
			if(cnt==k){
				cout << j;
				return 0;
			}
		}
	}

}
