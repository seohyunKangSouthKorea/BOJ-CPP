#include <bits/stdc++.h>
using namespace std;
int t,a,b;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> a >> b;
        cout << "Case #"<<i+1<<": "<<a<<" + "<<b<<" = " << a+b << '\n';
    }
}