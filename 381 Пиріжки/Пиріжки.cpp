#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int a,b,n;
    cin >> a >> b >> n;
    int f = a*100 + b;
    f*=n;
    cout << f/100 << " " << f%100 << endl;


}