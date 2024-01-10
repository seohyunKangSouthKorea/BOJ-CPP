#include <bits/stdc++.h>
using namespace std;
int a,b,c;
long long ret;
long long sol(int a, int b){
	if(b==1) return a % c;
	ret = sol(a,b/2);
	ret = (ret * ret)%c;
	if(b%2) ret = (ret*a) % c;
	return ret;
}
int main()
{
	cin >> a >> b >> c;
	cout <<	sol(a,b);
}