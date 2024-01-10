#include <bits/stdc++.h>
using namespace std;
int a[130][130], n, cnt[2];

bool check(int y, int x, int size){
	int ch = a[y][x];
	for(int i=y;i<y+size;i++){
		for(int j=x;j<x+size;j++){
			if(a[i][j]!=ch) return false;
		}
	}
	return true;
}

void go(int y, int x, int size){
	if(check(y,x,size) || size==1){
		cnt[a[y][x]]++;
		return;
	}
	go(y, x, size/2);
	go(y, x+size/2, size/2);
	go(y+size/2, x, size/2);
	go(y+size/2, x+size/2, size/2);
}

int main()
{
	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	go(0,0,n);
	cout << cnt[0] << '\n' << cnt[1];
}
