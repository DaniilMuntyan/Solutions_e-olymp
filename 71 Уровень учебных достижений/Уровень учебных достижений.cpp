#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    if(n<=3 && n >= 1)
    {
        cout << "Initial" << endl;
        return 0;
    }
    if(n >= 4 && n <= 6)
    {
        cout << "Average" << endl;
        return 0;
    }
    if(n<=9 && n >= 7)
    {
        cout << "Sufficient" << endl;
        return 0;
    }
    cout << "High" << endl;
    return 0;


}