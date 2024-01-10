#include <bits/stdc++.h>
using namespace std;
string a;
int idx[28];
int main()
{
    cin >> a;
    memset(idx,-1,sizeof(idx));
    for(int i=0;i<(int)a.length();i++){
        if(idx[a[i]-97]!=-1)    continue;
        idx[a[i]-97] = i;
    }
    for(int i=0;i<26;i++) cout << idx[i] << ' ';
}