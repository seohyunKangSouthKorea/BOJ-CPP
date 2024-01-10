#include <bits/stdc++.h>
using namespace std;
vector<string> v;
const char mo[] = {'a','e','i','o','u'};
const string per[] = {"ee","oo"};
string s;

string ch(string a){
	int cnt=0;
	for(auto i:a) {
		for(int j=0;j<5;j++){
			if(i==mo[j]) cnt++;
		}
	}
	if(cnt==0) return "not acceptable.";
	if(a.size()>=3){
		for(int i=0;i<=(int)a.size()-3;i++){
			string th = a.substr(i,3);
			int visited_m=0;
			for(int j=0;j<3;j++){
				for(int k=0;k<5;k++){
					if(th[j]==mo[k]) visited_m++;
				}
			}
			if(visited_m==3||visited_m==0) return "not acceptable.";
		}
	}
	if(a.size()>=2){
		for(int i=0;i<=(int)a.size()-2;i++){
			string se = a.substr(i,2);
			if(se==per[0]||se==per[1]) continue;
			if(se[0]==se[1]) return "not acceptable.";
		}
	}
	return "acceptable.";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(true){
		cin >> s;
		if(s=="end") break;
		v.push_back(s);
	}
	for(string i:v){
		cout << "<" << i << "> is " << ch(i) << '\n';
	}
}
