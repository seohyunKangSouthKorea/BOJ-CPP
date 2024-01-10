#include <bits/stdc++.h>
using namespace std;	// 한수 문제

int n,ret,tmp,dif;
vector<int> v;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i=1;i<=n;i++){
		if(i<=99) {	// 각 자리수가 등차수열인지 확인하는것으로 1~두자리수까지는 뭘해도 등차수열임
			ret++;	// 개수 세어주고
			continue;	// 바로 다음 포문으로
		}

		bool check=true;	// 여기 부터는 세자리 이상만 들어올수있음
		tmp=i;
		while(tmp){
			v.push_back(tmp%10);	// 각자리 숫자를 벡터에 담아서 각 차이를 확인할예정
			tmp = tmp / 10;
		}
		dif = v[1]-v[0];	// 차이
		for(int j=(int)v.size()-1;j>1;j--){	// v[1]-v[0]은 굳이 안하게 설정
			if(dif!=v[j]-v[j-1]){	// 차이가 똑같은지 확인
				check = false;	// 다르면 나가버림
				break;
			}
		}
		v.clear();	// 넣었던 벡터는 비게해야함
		if(check) ret++;
	}
	cout << ret;
}
