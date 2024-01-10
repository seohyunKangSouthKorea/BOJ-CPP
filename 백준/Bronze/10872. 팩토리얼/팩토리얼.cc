#include <bits/stdc++.h>
using namespace std;
int n;
int fac(int n){
    if(n==0||n==1) return 1;
    return n*fac(n-1);
}
int main()
{
    cin >> n;
    cout << fac(n);
}