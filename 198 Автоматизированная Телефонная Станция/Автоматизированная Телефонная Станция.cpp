#include <bits/stdc++.h>
using namespace std;
int main()
{
   /* freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    long a;
    cin >> a;
    long i,j,c=0,h;
    for(i=0;i<100;i++)
    {
        for(j=0;j<100;j++)
            if(a - i - j == 0)
            c++;
    }
    cout << c << endl;
}