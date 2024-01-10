// 2357한자리  13579(홀수)두자리이상
#include <bits/stdc++.h>
using namespace std;
int n;

bool check(int num){
	for(int i=2;i*i<=num;i++){
		if(num%i==0) return false;
	}
	return true;
}

void dfs(int chnum,int digit){
	if(digit==n){
		cout << chnum << '\n';
		return;
	}
	for(int i=1;i<10;i++){
		if(i%2==0)	continue;
		if(check(chnum*10+i)) dfs(chnum*10+i,digit+1);
	}
}

int main()
{
	cin >> n;
	dfs(2,1);
	dfs(3,1);
	dfs(5,1);
	dfs(7,1);
}
