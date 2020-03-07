#include <bits/stdc++.h>
using namespace std;
bool check(int a)
{
    int i=0, n;
    while(a >0 )
    {
        a/=10;
        i++;
    }
    if(i==2)
        return true;
    return false;
}
int main()
{
    string a;
    int i;
    cin >> a;
    vector <int> d(3);
    d[0] = (a[0]-'0') * 10 + (a[1]-'0');
    d[1] = ((a[0]-'0')*10 + (a[2] - '0'));
    d[2] = ((a[1]-'0')*10 + (a[2] - '0'));
    sort(d.begin(),d.end());
    for(i=0;i<3;i++)
    {
        if(check(d[i]))
        {
            cout << d[i] << endl;
            return 0;
        }
    }
}