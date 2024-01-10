#include <bits/stdc++.h>
using namespace std;
int a[100002],n,m,x;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i=0;i<n;i++)	cin >> a[i];
	sort(a,a+n);
	cin >> m;
	for(int i=0;i<m;i++){
		cin >> x;
		int st=0;
		int end=n-1;
		bool ch = false;
		while(st<=end){
			int mid = (st+end)/2;
			if(a[mid]<x)	st = mid+1;
			else if(a[mid]>x)	end = mid-1;
			else{
				cout << 1 << '\n';
				ch = true;
				break;
			}
		}
		if(!ch)	cout << 0 << '\n';
	}
}
