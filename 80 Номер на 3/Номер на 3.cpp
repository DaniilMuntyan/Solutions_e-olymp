#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c = 0;
    double f = 0.0,a;
    cin >> n;
    for(i = 0; i < n;i++)
    {
        cin >> a;
        if((i+1) % 3 == 0 && a > 0)
        {
            c++;
            f+=a;
        }
    }
    cout << c <<" " << f << endl;
}