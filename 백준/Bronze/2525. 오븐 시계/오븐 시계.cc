#include <iostream>
using namespace std;
int h,m,tm,tth,ttm;
int main()
{
    cin >> h >> m >> tm;
    if(tm>60-m) {
        if(h==23) h -= 24;
        h++;
        tm = tm-(60-m);
        tth = tm/60;
        ttm = tm%60;
        if(h+tth>23) h = h+tth-24;
        else h += tth;
        cout << h << ' ' << ttm;
    }
    else if(tm<60-m){
        cout << h << ' ' << m+tm;
    }
    else{
        if(h==23) h-=24;
        h++;
        cout << h << ' ' << 0;
    }
}