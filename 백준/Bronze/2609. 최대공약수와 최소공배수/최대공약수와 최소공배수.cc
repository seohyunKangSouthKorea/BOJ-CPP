// 연립합동방정식

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a,b;
	cin >> a >> b;
	int fa=a,fb=b;
	while(b!=0){
		int tmp = a;
		a = b;
		b = tmp%b;
	}
	cout << a <<'\n';
	cout << fa/a*fb;
}
