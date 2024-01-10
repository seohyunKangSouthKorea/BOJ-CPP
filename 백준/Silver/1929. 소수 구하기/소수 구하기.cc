#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int m,n;
	cin >> m >> n;

	vector<int> v;
	vector<bool> b(n+1,true);

	b[1]=false; // 1은 소수가 아니니까 false로 정해놓음
	for(int i=2;i*i<=n;i++){ // 소수가 아닌 애들을 거르는 체
		if(!b[i]) continue; // false가 아닌애들만 밑에 for문돌릴수있음
		for(int j=i*i;j<=n;j+=i){ // 배수를 다 false처리해서 걸러버림
			b[j] = false;
		}
	}

	for(int i=m;i<=n;i++){
		if(b[i]) v.push_back(i); // 소수면 그 숫자 추가함
	}

	for(auto i : v)
		cout << i << '\n';
}
