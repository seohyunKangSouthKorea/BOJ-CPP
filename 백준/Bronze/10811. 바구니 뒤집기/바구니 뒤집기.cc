#include <bits/stdc++.h>
using namespace std;
int a[102],n,m,q,w,tmp;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++)   a[i]=i;
    for(int i=0;i<m;i++){
        cin >> q >> w;
        for(int j=0;j<=(w-q)/2;j++){
            tmp = a[w-j];
            a[w-j] = a[q+j];
            a[q+j] = tmp;
        }
    }
    for(int i=1;i<=n;i++) cout << a[i]<<' ';
}