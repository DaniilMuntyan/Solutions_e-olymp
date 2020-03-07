#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    double n;
    int c=0;
    cin >> n;
    while(n>=1.2)
    {
        n-=1.2;
        n+=0.2;
        c++;
    }
    cout << c << endl;

}