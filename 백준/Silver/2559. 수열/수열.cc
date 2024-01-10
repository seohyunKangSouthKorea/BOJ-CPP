#include <bits/stdc++.h>
using namespace std;

int a[100001];
int psum[100001];
int res=-98764321;
int main()
{
	int n,k;
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		psum[i] = psum[i-1]+a[i];
	}

	for(int i=k;i<=n;i++){
		if(res<psum[i]-psum[i-k]) // 10-5
			res = psum[i]-psum[i-k];
	}
	cout <<res;
}
