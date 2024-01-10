#include <bits/stdc++.h>
using namespace std;
int n;
double sum,avg,mx,tmp,a[1002];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> tmp;
        a[i] = tmp;
        if(mx<tmp) mx = tmp;
    }
    for(int i=0;i<n;i++){
        sum += a[i]/mx*100.0;
    }
    avg = sum/(double)n;
    cout.precision(16);
    cout << avg;
}