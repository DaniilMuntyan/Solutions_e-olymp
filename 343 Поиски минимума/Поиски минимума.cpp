#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,mi;
    cin >> n;
    vector <long long> d(n);
    cin >> d[0];
    mi = d[0];
    for(i=1;i<n;i++){
        cin >> d[i];
        if(mi > d[i])
            mi = d[i];
    }
    cout << mi << endl;
}