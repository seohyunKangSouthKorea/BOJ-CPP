#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<int> s;
	int n;
	cin >> n;
	string str;
	int num;
	for(int i=0;i<n;i++){
		cin >> str;
		if(str=="push") {
			cin >> num;
			s.push(num);
		}
		else if(str=="top"){
			if(!s.empty())
				cout << s.top()<<'\n';
			else
				cout << -1<<'\n';
		}
		else if(str=="size") cout << s.size()<<'\n';
		else if(str=="empty") {
			if(s.empty())
				cout << 1 <<'\n';
			else
				cout << 0 <<'\n';
		}
		else if(str=="pop") {
			if(!s.empty()){
				cout << s.top() <<'\n';
				s.pop();
			}
			else
				cout << -1 << '\n';
		}
	}
}
