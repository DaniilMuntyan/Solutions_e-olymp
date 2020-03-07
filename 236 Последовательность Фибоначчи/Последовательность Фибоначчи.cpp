#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    unsigned long long ans = 1, n;
    cin >> n;
    unsigned long long a = 0, b = 1,i;
    vector <unsigned long long> fib(n+1);
    fib[0] = 0;
    fib[1] = 1;
    for(i = 2; i <= n; i++){
        fib[i]= fib[i-1] + fib[i-2];
    }

    cout << fib[n] << endl;
}