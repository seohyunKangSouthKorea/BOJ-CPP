#include <bits/stdc++.h>
using namespace std;
int b[102],n,m,q,w,k;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> q >> w >> k;
        for(int j=q;j<=w;j++){
            b[j] = k;
        }
    }
    for(int i=1;i<=n;i++) cout << b[i] << ' ';
}