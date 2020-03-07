#include <bits/stdc++.h>
using namespace std;
struct S{
int g;
int h;
int r;
};
bool p(S a, S b)
{
    if(a.g>b.g)
        return true;
    return false;
}
bool f(S a, S b)
{
    if(a.r == b.r)
        return p(a,b);
    if(a.r>b.r)
        return true;
    return false;

}
int main()
{
    int n;
    cin >> n;
    int G,H;
    int k = 0;
    S sold[n+1];
    cin >> G >> H;
    int g[n+1],h[n+1];
    int i;
    for(i=0;i<n;i++)
    {
         cin >> sold[i].g >> sold[i].h;
         sold[i].r = sold[i].g-sold[i].h;
    }
    sort(sold,sold+n,f);
    if(n < G + H)
    {
        cout << -1 << endl;
        exit(0);
    }else
    {
        for(i=0;i<G;i++)
        {
            k+=sold[i].g;
        }
        int w = i;
        int u = 1;
        i=n-1;
        while(u <= H&&i>=0)
        {


            k+=sold[i].h;
            u++;
            i--;
        }

            for(int j = i; j>=w;j--)
            k+=max(sold[j].g,sold[j].h);
        cout << k << endl;
    }
}