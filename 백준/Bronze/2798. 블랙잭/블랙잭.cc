#include <bits/stdc++.h>
using namespace std;
int n,m,a[102],mn;
int main()
{
    cin >> n >> m;
    for(int i=0;i<n;i++)    cin >> a[i];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]<=m&&mn<a[i]+a[j]+a[k]) mn = a[i]+a[j]+a[k];
            }
        }
    }
    cout << mn;
}