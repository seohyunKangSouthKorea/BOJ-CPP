#include <iostream>
using namespace std;
int k,q,l,b,n,p;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> k >> q >> l >> b >> n >> p;
    cout << 1-k << ' ' << 1-q << ' ' << 2-l << ' ';
    cout << 2-b << ' ' << 2-n << ' ' << 8-p;
}