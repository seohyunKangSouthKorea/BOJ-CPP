#include <bits/stdc++.h>
using namespace std;
int n,cnt;
string s;
int main()
{
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> s;
		stack<char> st;
		for(int j=0;j<(int)s.size();j++) {
			if(st.size() && st.top()==s[j]) st.pop();
			else st.push(s[j]);
		}
		if(st.size()==0) cnt++;
	}
	cout << cnt;
}
