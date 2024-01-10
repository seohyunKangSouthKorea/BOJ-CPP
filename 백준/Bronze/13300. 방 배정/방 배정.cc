#include <bits/stdc++.h>
using namespace std;

int yeo[7];
int nam[7];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	for(int i=0;i<n;i++){
		int s,y;
		cin >> s >> y;
		if(s==1){ // 남자
			for(int j=1;j<=6;j++){
				if(y==j)
					nam[j]++;
			}
		}
		else if(s==0){ // 여잔
			for(int j=1;j<=6;j++){
				if(y==j)
					yeo[j]++;
			}
		}
	}
	int sum=0;
	for(int i=1;i<=6;i++){
		if(nam[i]%k==0)
			sum += nam[i]/k;
		else
			sum += nam[i]/k+1;
		if(yeo[i]%k==0)
			sum += yeo[i]/k;
		else
			sum += yeo[i]/k+1;
	}
	cout << sum;
}
