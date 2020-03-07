#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i ;
    int a,b,c,d,e;
    a = n / 86400;
    b = n % 86400;
    c = b / 3600;
    d = b % 3600;
    e = d / 60;
    int t;
    t = d % 60;
    cout << a << " " << c << " " << e << " " << t << endl;
}