#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<int> s;
	int n;
	int num;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> num;
		if(num==0) s.pop();
		else{
			s.push(num);
		}
	}
	long long sum = 0;
	while(true){
		if(s.empty()) break;
		else {
			sum += s.top();
			s.pop();
		}
	}
	cout << sum;
}
