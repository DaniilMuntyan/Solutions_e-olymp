#include <bits/stdc++.h>
using namespace std;
map<int,int> a;
int f(int n)
{
    int res = 0;
    if(a[n] > 0)
        return a[n];
    for(int i = 2; i <= 9; i++)
        if(n%i==0){
            res = (res + f(n/i))%101;
        }

    return a[n] = res;

}
int main()
{
    int n,ans = 0;
    cin >> n;
    a[1] = 1;
    if(n == 1)
        ans = 0;
    else
        ans = f(n);
    cout << ans << endl;
}