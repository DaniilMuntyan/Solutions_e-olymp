#include <bits/stdc++.h>
using namespace std;
long long n, m;
bool k = false;
vector <long long> a,b;
vector <bool> d;
long long i,j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for(i=0;i<n;i++)
    {
        d.push_back(false);
        cin >> j;
        a.push_back(j);
    }
    j=0;
    cin >> m;
    for(i=0;i<m;i++)
    {

        cin >> j;
        b.push_back(j);
    }
    j = 0;
    sort(a.begin(),a.end());
    for(i=0;i<m;i++)
    {
        if(binary_search(a.begin(),a.end(),b[i]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}