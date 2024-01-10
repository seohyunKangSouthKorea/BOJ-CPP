#include <bits/stdc++.h>
using namespace std;

int alpha[26];
int aalpha[26];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int num,max=-1;
	int px,py;
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			cin >> num;
			if(max<num){
				max = num;
				px = i;
				py = j;
			}
		}
	}
	cout <<max <<'\n' << px+1 << ' '<< py+1;
}
