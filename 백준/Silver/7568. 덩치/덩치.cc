#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v;
int n,x,y;
int main()
{
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        v.push_back({x,y});
    }
    for(int i=0;i<n;i++){
        int cnt = 1;
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(v[i].first<v[j].first&&v[i].second<v[j].second)  cnt++;
        }
        cout << cnt << ' ';
    }
}