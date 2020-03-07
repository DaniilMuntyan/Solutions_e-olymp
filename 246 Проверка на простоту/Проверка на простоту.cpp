#include <bits/stdc++.h>
using namespace std;
int main()
{
    register long n,i;
    cin >> n;
    for(i=2;i*i<=n;i++)
    {
        if(n%i == 0)
        {
            cout << "False" << endl;
            return 0;
        }
    }
    cout << "True" << endl;
    return 0;
}