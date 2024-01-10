#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	string str;
	int num;
	deque<int> dq;
	for(int i=0;i<n;i++){
		cin >> str;
		if(str=="push_back"){
			cin >> num;
			dq.push_back(num);
		}
		else if(str=="push_front"){
			cin >> num;
			dq.push_front(num);
		}
		else if(str=="pop_front"){
			if(!dq.empty()){
				cout << dq.front()<<'\n';
				dq.pop_front();
			}
			else cout << -1 <<'\n';
		}
		else if(str=="pop_back"){
			if(!dq.empty()){
				cout << dq.back()<<'\n';
				dq.pop_back();
			}
			else cout << -1 <<'\n';
		}
		else if(str=="size") cout << dq.size() << '\n';
		else if(str=="empty") {
			if(dq.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if(str=="front") {
			if(!dq.empty())
				cout << dq.front() << '\n';
			else
				cout << -1 <<'\n';
		}
		else if(str=="back"){
			if(!dq.empty())
				cout << dq.back() << '\n';
			else
				cout << -1 << '\n';
		}
	}
}
