#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b,c=0;
    while(cin >> a >> b)
    {
        c++;
        if(a == 0 && b == 0)
            return 0;
        cout << "Case " << c << ": " << (a*(a-1))*(b*(b-1))/4 << endl;
    }
}