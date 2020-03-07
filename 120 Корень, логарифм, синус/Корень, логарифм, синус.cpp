#include <bits/stdc++.h>
using namespace std;
long a[10000000] = {};
long func(long n){
    if(n <= 0)
        return 1;
    if(a[n] == -1)
    {
        long p = (long)(n-sqrt(n)),b = (long)log(n),c = (long)(n*sin(n)*sin(n));
        if(a[p] == -1)
            a[p] = func(p);
        if(a[b] == -1)
        a[b] = func(b);
        if(a[c] == -1)
        a[c] = func(c);
        return a[n] = (a[b] + a[p] + a[c])%1000000;
    }
}
int main(){
    long k;
    while(cin >> k){
        if(k == -1)
            return 0;
        a[0] = 1;
        for(long i = 0; i <= k; i++)
            a[i] = -1;
        cout << func(k) << endl;
    }
}