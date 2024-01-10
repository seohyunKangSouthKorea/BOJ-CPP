#include <bits/stdc++.h>
using namespace std;
int n, a[1000002],o[1000002];
stack<int> st; // idx
int main()
{
	cin >> n;
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<n;i++){
		if(st.size()==0) st.push(i);
		else {
			while(st.size()){
				if(a[st.top()]<a[i]){
					o[st.top()] = a[i];
					st.pop();
				}
				else break;
			}
			st.push(i);
		}
	}
	while(st.size()){
		o[st.top()] = -1;
		st.pop();
	}
	for(int i=0;i<n;i++) cout << o[i] << ' ';
}