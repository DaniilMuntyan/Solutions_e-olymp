#include <bits/stdc++.h>
using namespace std;
int main()
{
    double d, mx = -1;
    while(cin >> d)
        if(d > mx)
            mx = d;
    cout << fixed << setprecision(2)<<mx<<endl;
}