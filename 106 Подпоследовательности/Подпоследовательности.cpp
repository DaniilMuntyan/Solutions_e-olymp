#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector <long long> a(n);

    for(long long i = 0; i < n; i++)
        cin >> a[i];
    vector <long long> d(n);
    d[0] = 1;
    for(long long i = 0; i < n; i++){
        d[i] = 1;
        for(long long j = 0; j < i; j++)
            if(a[j] < a[i] && 1+d[j] > d[i])
                d[i] = 1 + d[j];
    }
    cout << *max_element(d.begin(),d.end()) << endl;
}