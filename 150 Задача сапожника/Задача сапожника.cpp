#include <bits/stdc++.h>
using namespace std;
struct S
{
    double a,b,id;
};
bool r(S c, S d)
{
    if(c.a*d.b < d.a*c.b)
        return true;
    return false;
}
int main()
{
    int n;
    while(cin >> n){

    vector <S> f(n);
    for(int i = 0;i<n;i++){
        cin >> f[i].a >> f[i].b;
        f[i].id = i+1;
    }
    stable_sort(f.begin(),f.end(),r);
    for(int i=0;i<n;i++)
        cout << f[i].id << " ";
    cout << endl;
    }
    return 0;
}