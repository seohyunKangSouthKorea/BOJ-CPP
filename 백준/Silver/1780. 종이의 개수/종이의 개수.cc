#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
int n, a[2190][2190];
bool ch(int y, int x, int size){
	int tmp = a[y][x];
	if(size==1) return true;
	for(int i=y;i<y+size;i++){
		for(int j=x;j<x+size;j++){
			if(tmp!=a[i][j]) return false;
		}
	}
	return true;
}
void go(int y, int x, int size){
	if(ch(y,x,size)) {
		mp[a[y][x]]++;
		return;
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			go(y+size/3*i,x+size/3*j,size/3);
		}
	}
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
	cout << mp[-1] << '\n' << mp[0] << '\n' << mp[1] <<'\n';
}

