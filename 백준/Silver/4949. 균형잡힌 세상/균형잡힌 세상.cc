#include <bits/stdc++.h>
using namespace std;
string s;
string check(string s){
	stack<char> st;
	for(char i:s) {
		if(i=='('||i=='[') st.push(i);
		if(i==')'){
			if(st.size() && st.top()=='(') st.pop();
			else return "no";
		}
		if(i==']'){
			if(st.size() && st.top()=='[') st.pop();
			else return "no";
		}
	}
	if(st.size()==0) return "yes";
	else return "no";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(getline(cin,s)){
		if(s==".") break;
		cout << check(s) << '\n';
	}
}
