#include <bits/stdc++.h>
using namespace std;
int dp[46],n;
int main()
{
    dp[1]=1;    
    cin >> n;
    for(int i=2;i<=n;i++) dp[i] = dp[i-1]+dp[i-2];
    cout << dp[n];
}