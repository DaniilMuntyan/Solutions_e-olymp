#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n,k;
    cin >> n >> k;
    long long  i = 0;
    while((n/k)>1)
    {
        n/=k;
        i++;
    }
    cout << i << endl;
}