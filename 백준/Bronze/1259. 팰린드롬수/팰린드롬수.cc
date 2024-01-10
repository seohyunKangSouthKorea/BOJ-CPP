#include <bits/stdc++.h>
using namespace std;
string a;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(true){
		cin >> a;
		bool ch = true;
		if(a=="0") break;
		for(int i=0;i<(int)a.size()/2;i++){
			if(a[i]!=a[(int)a.size()-1-i]){
				cout << "no\n";
				ch = false;
				break;
			}
		}
		if(ch)	cout << "yes\n";
	}
}
