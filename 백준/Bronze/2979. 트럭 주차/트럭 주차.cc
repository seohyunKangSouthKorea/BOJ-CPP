#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int st, ar, ret;
int cnt[102];
int main()
{
	cin >> a >> b >> c; // 주차요금 입력
	for(int i=0;i<3;i++) {
		cin >> st >> ar;
		for(int j = st; j < ar; j++)	// 시각 문제에서는 이상~미만 으로 풀기에 ar을 미만으로 생각함
			cnt[j]++;	// 이 시간대에 차가 몇대 있었는지 카운트함 1분씩 체크
	}
	for(int i=1;i<100;i++){	// 1분이상 부터 100분 미만 까지 1분마다 몇대있는지 체크하고 대수만큼 맞는 요금을 곱해서 계속 더함
		if(cnt[i]){
			if(cnt[i]==1)	ret += a*1;
			if(cnt[i]==2)	ret += b*2;
			if(cnt[i]==3)	ret += c*3;
		}
	}
	cout << ret;
}
