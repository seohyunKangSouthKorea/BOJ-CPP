#include <bits/stdc++.h>
using namespace std;
double c,n,tmp[1002],avg;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> c;
	for(int i=0;i<c;i++){
		cin >> n;
		double sum=0;
		for(int j=0;j<n;j++){
			cin >> tmp[j];
			sum += tmp[j];
		}
		avg = sum/n;
		double m=0;
		for(int j=0;j<n;j++){
			if(avg<tmp[j]) m++;
			tmp[j] = 0;
		}
		cout << fixed;
		cout.precision(3);
		cout << m/n*100 << '%'<<'\n';
	}
}