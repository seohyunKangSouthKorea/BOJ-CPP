#include <bits/stdc++.h>
using namespace std;
string a;
int cnt[28],mo,mx,idx;
int main()
{
    cin >> a;
    for(int i=0;i<(int)a.length();i++){
        if(a[i]<=90) cnt[a[i]-65]++;
        else cnt[a[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(mx<cnt[i]) {
            mx = cnt[i];
            idx = i;
        }
    }
    for(int i=0;i<26;i++){
        if(mx==cnt[i]) mo++;
    }
    if(mo==1) cout << char(idx+65);
    else cout << "?";
}