#include <bits/stdc++.h>
using namespace std;
int tmp,a[42],cnt;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<10;i++){
        cin >> tmp;
        a[tmp%42]++;
    }
    for(int i=0;i<42;i++){
        if(a[i]) cnt++;
    }
    cout << cnt;
}