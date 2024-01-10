#include<bits/stdc++.h>
using namespace std;
int t,r;
string s;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> r >> s;
		for(char c:s){
			for(int j=0;j<r;j++)
				cout << c;
		}
		cout << '\n';
	}
}
