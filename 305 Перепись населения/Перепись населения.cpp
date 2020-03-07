#include <bits/stdc++.h>
using namespace std;
int n;
vector <int> a;
vector <int> b(1001,0);
int i,j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> j;
        a.push_back(j);
        b[j]++;
    }
    sort(a.begin(),a.end());
    int k = *max_element(b.begin(),b.end());
    for(i=0;i<n;i++)
    {
        if(b[a[i]] == k){
            cout << a[i] << endl;
            return 0;
        }
    }
}