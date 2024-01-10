#include <bits/stdc++.h>
using namespace std;
int n,m,j,ret,lt,rt,ap;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	cin >> j;
	lt = 1;
	for(int i=0;i<j;i++){
		cin >> ap;
		rt = lt + m - 1;
		if(lt <= ap && ap <= rt)	continue;
		else if(ap < lt){
			ret += lt - ap;
			lt = ap;
		}
		else if(rt < ap){
			ret += ap - rt;
			lt += ap - rt;
		}
	}
	cout << ret;
}
