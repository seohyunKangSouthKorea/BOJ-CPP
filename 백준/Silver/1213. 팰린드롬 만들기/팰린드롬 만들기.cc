#include <bits/stdc++.h>
using namespace std;	
string s,ret;
int cnt[26],flag;
char mid;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> s;
	for(int i=0;i<(int)s.size();i++) cnt[s[i]-'A']++;	
	for(int i=25;i>=0;i--){		
		if(cnt[i]){		
			if(cnt[i]%2){	
				flag++;	
				mid = char(i+'A');	
				cnt[i]--;	
			}
			if(flag==2) break;	
			for(int j=0;j<cnt[i];j++){ 
				if(j<cnt[i]/2) ret.insert(ret.begin(),char(i+'A'));		
				else ret += char(i+'A');								
			}
		}
	}
	if(mid) ret.insert(ret.begin()+ret.size()/2,mid);	
	if(flag==2) cout << "I'm Sorry Hansoo\n";	
	else cout << ret << '\n';	
}
