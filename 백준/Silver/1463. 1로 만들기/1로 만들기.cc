#include <bits/stdc++.h>
using namespace std;
int dp[1000002],x,tmp;
int main()
{
    dp[1]=0;
    cin >> x;
    for(int i=2;i<=x;i++){
        tmp = dp[i-1]+1;
        if(i%2==0) tmp = min(tmp,dp[i/2]+1);
        if(i%3==0) tmp = min(tmp,dp[i/3]+1);
        dp[i]=tmp;
    }
    cout << dp[x];
}