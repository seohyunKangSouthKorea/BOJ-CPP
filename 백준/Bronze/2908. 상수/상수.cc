#include <bits/stdc++.h>
using namespace std;
int a,b,n,m;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b;
    int ba = 100;
    int ba2 = 100;
    while(ba&&ba2){
        n += a%10*ba;
        a /= 10;
        ba /= 10;
        m += b%10*ba2;
        b /= 10;
        ba2 /= 10;
    }
    if(n>m) cout << n;
    else cout << m;
}