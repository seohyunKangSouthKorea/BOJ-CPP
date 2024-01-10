#include <bits/stdc++.h>
using namespace std;
int n;
string pat;
string token;
string str;
string fir,sec;
vector<string> ret;
typedef long long ll;
ll pos;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	cin >> pat;
	
	while((pos=pat.find('*'))!=string::npos){
		token = pat.substr(0,pos);
		ret.push_back(token);
		pat.erase(0,pos+1);
	}
	ret.push_back(pat);
	
	for(int i=0;i<n;i++){
		cin >> str;
		if(str.length()<ret[0].length()+ret[1].length()){
			cout << "NE\n";
			continue;
		}
		fir = str.substr(0,ret[0].length());
		sec = str.substr(str.length()-ret[1].length(),str.length());
		if(fir!=ret[0]||sec!=ret[1]){
			cout << "NE\n";
			continue;
		}
		cout << "DA\n";
	}
	
	return 0;
}
