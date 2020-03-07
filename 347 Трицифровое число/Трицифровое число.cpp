#include <bits/stdc++.h>
using namespace std;
int main()
{
    int g;
    cin >> g;
    int i;
    int a[3];
    a[0] = g / 100;
    a[1]= (g%100)/10;
    a[2]= g%10;
    int b[6];
    b[0] = a[0]*100 + a[1]*10 + a[2];
    b[1] = a[0]*100 + a[2]*10 + a[1];
    b[2] = a[1]*100 + a[0]*10 + a[2];
    b[3] = a[1]*100 + a[2]*10 + a[0];
    b[4] = a[2]*100 + a[1]*10 + a[0];
    b[5] = a[2]*100 + a[0]*10 + a[1];
    int m = b[0];
    for(i=0;i<6;i++)
    {
        if(b[i] < m && b[i]/100 != 0)
            m = b[i];
    }

    cout << m << endl;
    return 0;
}