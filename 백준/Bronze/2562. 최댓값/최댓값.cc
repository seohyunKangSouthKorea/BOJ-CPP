#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x;
	int max = -1;
	int reidx;
	for(int i=0;i<9;i++){
		cin >> x;
		if(max < x){
			max = x;
			reidx = i;
		}
	}
	cout << max << '\n' << reidx+1;
}
