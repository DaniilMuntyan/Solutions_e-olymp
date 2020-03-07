#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, n;
    cin >> a >> b >> n;
    if(n == 0) cout << 0 << endl;
    else
        if(n%60 != 0)
            cout << (a + ((n/60) + 1)*b) << endl;
        else
            cout << (a + ((n/60))*b) << endl;


}