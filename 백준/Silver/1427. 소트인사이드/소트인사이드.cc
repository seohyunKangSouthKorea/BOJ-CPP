#include <bits/stdc++.h>
using namespace std;
string a;
int main()
{
    cin >> a;
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    cout << a;
}