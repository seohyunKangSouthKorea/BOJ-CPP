#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int b1,b2,b3;
	int d1,d2;
	cin >> b1 >> b2 >> b3 >> d1 >> d2;
	int minb = min({b1,b2,b3});
	int mind = min(d1,d2);
	cout << minb+mind-50;
}
