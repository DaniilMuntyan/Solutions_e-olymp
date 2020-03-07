#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    a*=60;
    b*=60;
    a = (a*a)/b;
    cout << a/60 << " " << a%60 << endl;
}