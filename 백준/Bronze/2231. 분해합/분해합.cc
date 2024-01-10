#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++){
        int tmp = i,sum=0;
        sum += tmp;
        while(tmp){
            sum += tmp%10;
            tmp = tmp/10;
        }
        if(sum == n) {
            cout << i;
            return 0;
        }
    }
    cout << 0;
}