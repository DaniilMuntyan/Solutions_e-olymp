#include <bits/stdc++.h>
using namespace std;
struct S
{
    int a;
    double b;
};
int main()
{
    int n,res=0;
    cin >> n;
    int i;
    vector <S> d(n);
    for(i=0;i<n;i++)
    {
        cin >> d[i].a >> d[i].b;
        if(d[i].b < 50.00)
            res+=d[i].a;
    }
    cout << res << endl;
}