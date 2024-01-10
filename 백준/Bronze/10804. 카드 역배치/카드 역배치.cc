#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int v[20];
	for(int i=0;i<20;i++)
		v[i] = i+1;
	int a,b;
	for(int i=0;i<10;i++){
		cin >> a >> b;
		a = a - 1; // 왜 1을 빼냐? 그 이유는 실제 인덱스는 0부터 시작하니까
		b = b - 1; // 예를 들어 [5,10]을 바꿔주세요 하면 인덱스 4-9까지를 의미
		for(int j = a;j<=(a+b)/2;j++){
			int tmp=v[j];
			v[j] = v[b-(j-a)];
			v[b-(j-a)] = tmp;
		}
	}
	for(int i=0;i<20;i++)
		cout << v[i] << ' ';
}
