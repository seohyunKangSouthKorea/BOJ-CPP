#include <bits/stdc++.h>
using namespace std;
vector<int> v(8);
int n;
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++) v[i-1]=i;
    do{
        for(int i=0;i<n;i++) cout << v[i] << ' '; 
        cout << '\n';
    }while(next_permutation(v.begin(),v.begin()+n));
}