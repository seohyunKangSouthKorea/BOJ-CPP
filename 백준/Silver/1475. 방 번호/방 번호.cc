#include <bits/stdc++.h>
using namespace std;

int freq[10];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	while(true){
		if(n%10==9||n%10==6)
			freq[9]++;
		else freq[n%10]++;
		n = n/10;
		if(n==0) break;
	}
	int max = -1;
	for(int i=0;i<10;i++){
		if(max<freq[i]){
			if(i==9)
				freq[9] = freq[9]/2+freq[9]%2;
			max = freq[i];
		}
	}
	cout << max;
}
