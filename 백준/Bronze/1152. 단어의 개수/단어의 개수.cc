#include <bits/stdc++.h>
using namespace std;
string a;
int cnt,ch1,ch2;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    getline(cin,a);
    if(a.length()==1&&a[0]==' ') {
        cout << 0;
        return 0;
    }
    else if(a.length()>2&&a[0]==' '&&a[a.length()-1]==' '){
        ch1 = 1;
        ch2 = -1;
    }
    else if(a[0]==' ')   ch1 = 1;
    else if(a[a.length()-1]==' ')    ch2 = -1;
    for(int i=0+ch1;i<(int)a.length()+ch2;i++){
        if(a[i]==' ') cnt++;
    }
    cout << cnt+1;
}