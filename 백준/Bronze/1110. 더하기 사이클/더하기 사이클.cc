#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int origin = n;
	int fir,sec,next;
	int cnt = 0;

	while(true){
		fir = n/10;
		sec = n%10;
		next = (fir+sec)%10;
		n = sec*10+next;
		cnt++;
		if(origin == n) break;
	}
	cout << cnt;
}
