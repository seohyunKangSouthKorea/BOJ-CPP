#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
	while(cin>>n){
		int makeOne=1, ret=1;
		while(true){
			if(makeOne%n==0){
				cout << ret<<'\n';
				break;
			}
			else{
				makeOne = makeOne*10+1;	//  (11*10+1)%n == {(11%n)+10+1}%n  
				makeOne %= n;	// (a*b)%n ==  {(a%n)*(b%n)}%n
				ret++;
			}
		}
	}
}