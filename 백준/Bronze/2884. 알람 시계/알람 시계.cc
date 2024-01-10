#include <iostream>
using namespace std;
int h,m;
int main()
{
    cin >> h >> m;
    if(m<45){
        if(h==0) cout << 23;
        else cout << h-1;
        cout << ' ' << 60-(45-m);
    }
    else cout << h << ' ' << m-45;
}