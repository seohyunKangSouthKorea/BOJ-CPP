// 연립합동방정식

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	while(true){
		cin >> n;
		if(n==0) break;
		vector<bool> b(2*n+1,true);
		b[1] = false;
		for(int i=2;i*i<=2*n;i++){
			if(!b[i]) continue;
			for(int j=i*i;j<=2*n;j+=i){
				b[j] = false;
			}
		}
		int cnt=0;
		for(int i=n+1;i<=2*n;i++){
			if(b[i]) cnt++;
		}
		cout << cnt << '\n';
	}

}
