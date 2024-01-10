#include <bits/stdc++.h>
using namespace std;
int b[102],n,m,q,w,tmp;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++) b[i] = i;
    for(int i=0;i<m;i++){
        cin >> q >> w;
        tmp = b[q];
        b[q] = b[w];
        b[w] = tmp;
    }
    for(int i=1;i<=n;i++) cout << b[i] << ' ';
}