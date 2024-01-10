#include <bits/stdc++.h>
using namespace std;
int dp[100002],n,mn;
int main()
{
    memset(dp,-1,sizeof(dp));
    dp[2]=1;
    dp[4]=2;
    dp[5]=1;
    cin >> n;
    for(int i=6;i<=n;i++){
        if(dp[i-5]!=-1) dp[i] = dp[i-5]+1;
        if(dp[i-2]!=-1) {
            if(dp[i]!=-1)   dp[i] = min(dp[i],dp[i-2]+1);
            else dp[i] = dp[i-2]+1;
        }
    }
    cout << dp[n];
}