#include <bits/stdc++.h>
using namespace std;
int n;
string tmp,a;
bool ch(int x){
	if(x<=1) return 0;
	if(x==2) return 1;
	if(x%2==0) return 0;
	for(int i=3;i*i<=x;i++) if(x%i==0) return 0;
	return 1;
}
int main()
{
	cin >> n;
	for(;;n++){
		a = to_string(n);
		tmp = a;
		reverse(&a[0],&a[0]+a.size());
		if(a==tmp&&ch(n)) break;
	}
	cout << n;
}
