#include <bits/stdc++.h>
using namespace std;
int n;
vector <int> a;
int x;
int i;
    int g;
short k;

int main()
{
    ios_base::sync_with_stdio(0);

    cin >> n;

    for(i=0;i<n;i++){
        cin >> k;
        a.push_back(k);
    }
    cin >> x;
    a.push_back(x);
    sort(a.rbegin(),a.rend());
    for(i=0;i<n+1;i++)
    {
        if(a[i] == x)
            g = i+1;
    }
    cout << g << endl;
}