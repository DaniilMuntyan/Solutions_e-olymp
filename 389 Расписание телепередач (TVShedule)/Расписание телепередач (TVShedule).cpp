#include <bits/stdc++.h>
using namespace std;
struct S
{
    int a,b;
};
bool check(S v, S m)
{

    int A = v.a, B=v.b,  C=m.a, D=m.b;
    if(A == C) { return true; } if(A > C) { if(A < D) { return true; } return false; } if(A < C) { if(B > C) { return true; } return false; } return false;
}
int main()
{
    vector <S> d(3);
    int i;
    int q,w,e,r,t,y;
    for(i=0;i<3;i++)
    {
        cin >> q >> w >> e >> r;
        d[i].a = q*60+w;
        d[i].b = e*60+r;
    }
    if(!check(d[0],d[1]) && !check(d[1],d[2]) && !check(d[0],d[2]))
    {
        cout << 0 << endl;
        return 0;
    }
    if(check(d[0],d[1]) && !check(d[1],d[2]) && !check(d[0],d[2]))
    {
        cout << 1 << endl;
        return 0;
    }
    if(check(d[0],d[2]) && !check(d[1],d[2]) && !check(d[0],d[1]))
    {
        cout << 2 << endl;
        return 0;
    }
    if(check(d[0],d[1]) && check(d[0],d[2]) && !check(d[1],d[2]))
    {
        cout << 3 << endl;
        return 0;
    }
    if(check(d[1],d[2]) && !check(d[0],d[2]) && !check(d[0],d[1]))
    {
        cout << 4 << endl;
        return 0;
    }
    if(check(d[1],d[0])&&check(d[1],d[2]) && !check(d[0],d[2])){
        cout << 5 << endl;
        return 0;
    }
    if(check(d[2],d[0]) && check(d[2],d[1]) && !check(d[1],d[0]))
    {
        cout << 6 << endl;
        return 0;
    }
    if(check(d[1],d[0]) && check(d[0],d[2]) && check(d[1],d[2]))
    {
        cout << 7 << endl;
        return 0;
    }
    cout << 8 << endl;
    return 0;
}