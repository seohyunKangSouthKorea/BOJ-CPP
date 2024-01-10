#include <bits/stdc++.h>
using namespace std;
int t;
string a;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> a;
        cout << a[0] << a[a.length()-1] << '\n';
    }
}