#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    int i;
    cin >> n;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}