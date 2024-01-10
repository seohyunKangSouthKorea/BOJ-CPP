#include <bits/stdc++.h>
using namespace std;
int n,cnt;
string a;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> a;
    for(int i=0;i<n;i++){
        cnt += a[i]-48;
    }
    cout << cnt;
}