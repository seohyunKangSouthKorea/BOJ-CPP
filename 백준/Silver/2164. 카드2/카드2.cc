#include <bits/stdc++.h>
using namespace std;
int n;
queue<int> q;
int main()
{
	cin >> n;
	for(int i=0;i<n;i++) q.push(i+1);
	while(q.size()>1){
		q.pop();
		if(q.size()==1) break;
		q.push(q.front());
		q.pop();
	}
	cout << q.front();
}
