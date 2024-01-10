#include <bits/stdc++.h>
using namespace std;
int n;
void yak(int n){
    vector<int> v;
    int cnt=1;
    v.push_back(1);
    for(int i=2;i<n;i++){
        if(n%i==0) {
            v.push_back(i);
            cnt+=i;
        }
    } 
    if(cnt==n){
        cout << n << " = ";
        for(int i=0;i<(int)v.size();i++){
            cout << v[i];
            if(i==(int)v.size()-1) continue;
            cout << " + ";
        }
        cout << '\n';
    }
    else cout << n << " is NOT perfect.\n";
}
int main()
{
    while(true){
        cin >> n;
        if(n==-1) break;
        yak(n);
    }
}