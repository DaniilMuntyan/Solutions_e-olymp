#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long double a;
    long double av;
    long double sum =0;
    int h = 0;
    while(cin >> a)
    {
        h++;
        sum+=a;
   }
    av = (sum/h);
    cout << setprecision(2) << fixed << av << endl;
}