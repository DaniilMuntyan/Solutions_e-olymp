#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,a;
    cin >> n;
    int i;
    for(i=0;i<n;i++)
    {
        cin >> a;
        if(a%2==0)
            cout << a << " is even" << endl;
        else
            cout << a << " is odd" << endl;
    }
    return 0;
}