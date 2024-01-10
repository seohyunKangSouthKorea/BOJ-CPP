#include <bits/stdc++.h>
using namespace std;
string a[8]={"c=","c-","dz=","d-","lj","nj","s=","z="},s;
int cnt[8],sum,cro;
int main()
{
	cin >> s;
	int all = s.length();
	for(int i=0;i<8;i++){
		int idx=0;
		while(true){
			if(s.find(a[i],idx)!=string::npos){
				cnt[i]++;
				idx = s.find(a[i],idx)+1;
			}
			else break;
		}
	}
	cnt[7] = cnt[7]-cnt[2];
	for(int i=0;i<8;i++){
		if(i==2) sum += cnt[i]*3;
		else sum += cnt[i]*2;
		cro += cnt[i];
	}
	cout << cro+all-sum;
}