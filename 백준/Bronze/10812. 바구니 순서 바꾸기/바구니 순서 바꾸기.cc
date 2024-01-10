#include <bits/stdc++.h>
using namespace std;
int n,m,i,j,k;
int a[104],temp[104],tmp[104];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int p=1;p<=n;p++) a[p] = p;
    for(int p=0;p<m;p++){
        cin >> i >> j >> k;
        for(int q=k;q<=j;q++) temp[q-k] = a[q];
        for(int q=i;q<=k-1;q++) tmp[q-i] = a[q];
        for(int q=i;q<=j-k+i;q++){
            a[q] = temp[q-i];
            temp[q-i]=0;
        }
        for(int q=j-k+i+1;q<=j;q++){
            a[q] = tmp[q-(j-k+i+1)];
            tmp[q-(j-k+i+1)] = 0;
        }
    }
    for(int p=1;p<=n;p++) cout << a[p] << ' ';
}