#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i,j;
    int c = 0,a;
    cin >> n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> a;
            if(a == 1)
                c++;
        }
        cout << c << endl;
        c=0;
    }
}