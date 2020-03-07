#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >>  n;
    long long i,a;
    long long mi1,mi2;
    cin >> i;
    mi1 = i;
    mi2 = 1000000001;
    for(i=1;i<n;i++){
        cin >> a;
        if(mi1 > a)
        {
            mi2 = mi1;
            mi1 = a;
        }
        if(mi2 > a && a != mi1)
        {
            mi2 = a;
        }
    }
    cout << mi1 << " " << mi2 << endl;
}