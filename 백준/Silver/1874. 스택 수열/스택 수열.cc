#include <bits/stdc++.h>
using namespace std;
int n,mx,tmp;
stack<int> st;
queue<char> q;
string ch;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> tmp;
		while(ch==""){
			if(st.size()){
				if(st.top()>tmp){
					ch = "NO";
					break;
				}
				else if(st.top()<tmp){
					st.push(++mx);
					q.push('+');
				}
				else{
					st.pop();
					q.push('-');
					break;
				}
			}
			else {
				st.push(++mx);
				q.push('+');
			}
		}
	}
	if(ch=="NO")	cout << ch << '\n';
	else{
		while(q.size()){
			cout << q.front() << '\n'; q.pop();
		}
	}
}
