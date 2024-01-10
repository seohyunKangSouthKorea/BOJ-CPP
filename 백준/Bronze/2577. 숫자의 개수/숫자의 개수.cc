#include <bits/stdc++.h>
using namespace std;

int freq[10];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a,b,c;
	cin >> a >> b >> c;
	int mul = a*b*c;

	while(true){
		freq[mul%10]++;
		mul = mul/10;
		if(mul==0) break;
	}

	for(int i=0;i<10;i++)
		cout << freq[i] << '\n';
}
