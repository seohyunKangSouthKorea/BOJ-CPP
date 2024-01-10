#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	stack<string> s;
	string str;
	for(int i=0;i<t;i++){
		cin >> str;
		int c=0;
		int n = str.length();
		for(int j=0;j<n;j++){
			if(str[j]=='(')
				s.push("(");
			if(str[j]==')'){
				if(!s.empty())
					s.pop();
				else{
					cout << "NO\n";
					c++;
					break;
				}
			}
		}
		if(s.empty()){
			if(c==0)
				cout << "YES\n";
		}
		else{
			cout << "NO\n";
			while(!s.empty())
				s.pop();
		}
	}
}
