#include <bits/stdc++.h>
using namespace std;
int dp[1000002],n,m=1000000007;
int main()
{
    dp[1]=1;
    cin >> n;
    for(int i=2;i<=n;i++){
        dp[i] = (dp[i-1]%m+dp[i-2]%m)%m;
    }
    cout << dp[n];
}