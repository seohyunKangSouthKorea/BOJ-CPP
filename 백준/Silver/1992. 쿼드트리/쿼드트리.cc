#include <bits/stdc++.h>
using namespace std;
string a[66];
int n;

bool check(int y, int x, int size){
	char ch = a[y][x];
	for(int i=y;i<y+size;i++){
		for(int j=x;j<x+size;j++){
			if(a[i][j]!=ch) return false;
		}
	}
	return true;
}

string go(int y, int x, int size){
	string s;
	if(check(y,x,size) || size==1){
		s += a[y][x];
		return s;
	}
	s += "(";
	s += go(y, x, size/2);
	s += go(y, x+size/2, size/2);
	s += go(y+size/2, x, size/2);
	s += go(y+size/2, x+size/2, size/2);
	s += ")";
	return s;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	cout << go(0,0,n);
}
