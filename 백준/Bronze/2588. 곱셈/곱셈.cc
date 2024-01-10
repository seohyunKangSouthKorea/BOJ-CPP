#include <iostream>
using namespace std;
int a,b,tmp;
int main()
{
    cin >> a >> b;
    tmp = b;
    for(int i=0;i<3;i++){
        cout << a*(b%10) << '\n';
        b = b/10;
    }
    cout << a*tmp;
}