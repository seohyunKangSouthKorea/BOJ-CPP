#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int m;
    cin >> n;
    int min = 1000001;
    int max = -1000001;
    while(n--){
        cin >> m;
        if(max < m) max = m;
        if(min > m) min = m;
    }
    cout << min << ' ' << max;
}