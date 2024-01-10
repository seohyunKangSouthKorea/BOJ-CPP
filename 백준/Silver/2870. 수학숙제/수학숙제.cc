#include <bits/stdc++.h>
using namespace std;
int n;
string s,tmp;
vector<string> v;

bool cmp(string a, string b){
	if(a.size()==b.size())
		return a < b;
	return a.size() < b.size();
}

void ch_zero(string a){
	while(a.size()&&a[0]=='0') a.erase(0,1);
	if(a.size()==0) v.push_back("0");
	else v.push_back(a);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> s;
		tmp = "";
		for(char j:s){
			if(48<=j&&j<=57) tmp += j;
			else if(tmp!=""){
				ch_zero(tmp);
				tmp = "";
			}
		}
		if(tmp!=""){
			ch_zero(tmp);
			tmp = "";
		}
	}
	sort(v.begin(),v.end(),cmp);
	for(string i:v) cout << i << '\n';
}
