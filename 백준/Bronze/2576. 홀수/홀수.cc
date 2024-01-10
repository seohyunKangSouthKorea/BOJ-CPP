#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int in;
	int hsum=0;
	int min=101;
	for(int i=0;i<7;i++){
		cin >> in;
		if(in%2!=0){
			hsum+=in;
			if(min>in)
				min = in;
		}
	}
	if(min==101) cout << -1;
	else cout << hsum <<'\n'<<min;
}
