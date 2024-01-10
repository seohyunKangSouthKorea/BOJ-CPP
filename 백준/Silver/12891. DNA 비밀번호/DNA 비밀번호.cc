#include <bits/stdc++.h>
using namespace std;
string a;
int s,p,ch[4],here[4],cnt;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> s >> p;
	cin >> a;
	for(int i=0;i<4;i++) cin >> ch[i];
	bool b=true;
	for(int i=0;i<p;i++) {
		if(a[i]=='A') here[0]++;
		else if(a[i]=='C') here[1]++;
		else if(a[i]=='G') here[2]++;
		else if(a[i]=='T') here[3]++;
	}
	for(int i=0;i<4;i++){
		if(here[i]<ch[i]){
			b=false;
			break;
		}
	}
	if(b) cnt++;
	if(s>1){
		for(int i=1;i<s-p+1;i++){
			b = true;
			if(a[i-1]=='A') here[0]--;
			else if(a[i-1]=='C') here[1]--;
			else if(a[i-1]=='G') here[2]--;
			else if(a[i-1]=='T') here[3]--;
			if(a[i+p-1]=='A') here[0]++;
			else if(a[i+p-1]=='C') here[1]++;
			else if(a[i+p-1]=='G') here[2]++;
			else if(a[i+p-1]=='T') here[3]++;
			for(int i=0;i<4;i++){
				if(here[i]<ch[i]){
					b=false;
					break;
				}
			}
			if(b) cnt++;
		}
	}
	cout << cnt;
}
