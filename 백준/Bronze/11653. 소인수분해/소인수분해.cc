#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for(int i=2;i*i<=n;i++){ // i*i>n일때는 n의 소인수가 없음
		while(n%i==0){ // 나눠질때까지 나눈다.
			n = n/i;
			cout << i << '\n';
		}
	}                   //ex)100일때   2*2<=100 5*5<=25 조건 만족
	if(n!=1) cout << n; //   소인수(i)    2  2  5  5
}                       //   n의 값(n)   50 25 5  1
                        //                   주의 n이 1인데 n의 값을 마지막에 출력 하면 안돼서
                        //                  n!=1이라는 조건 걸어둠
                        // n이 1이아니면 n은 소수 하나만 남아서 그거 까지 출력해줘야함
                        //ex)1100일때    2*2<=1100 5*5<=275 11*11>11 for문빠져나옴
                        //    소인수(i)     2 2 5 5
						//    n의 값(n)    550 275 55 11
                        // n이1이 아님 11인 소수 한개가 남아서 마지막 n까지 출력해서 2 2 5 5 11을 철력
