#include <bits/stdc++.h>
using namespace std;
long f(long k)
{
    if(k == 1)
        return 1;
    if(k%2==0)
        return 2*f(k/2)-1;
        else
    return 2*f((k-1)/2) + 1;
}
int main()
{
    long n,k,t,c = 0,cas=0;
    cin >> k;
    for(long i = 1; i <= k;i++){
        cin >> n;
        c = 0;
            t = f(n);
        while(t != n){
            c++, n = t;
            t = f(n);
        }

        cout << "Case " << i << ": " << c << " " << n << endl;

    }
}