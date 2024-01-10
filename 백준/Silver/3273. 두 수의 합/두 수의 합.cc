#include <bits/stdc++.h>
using namespace std;

int freq[1000001];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int v[100000];
	int x;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	cin >> x;
	int cnt = 0;
	for(int i=0;i<n;i++){
		if(x-v[i]>=1 && x-v[i]<=1000000){
			if(freq[x-v[i]]==1)
				cnt++;
		}
		freq[v[i]]++;
	}
	cout << cnt;
}
