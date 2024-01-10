#include <bits/stdc++.h>
using namespace std;
int n;
string a;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=0;i<n/4;i++) a += "long ";
    a += "int";
    cout << a;
}