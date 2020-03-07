#include <bits/stdc++.h>
using namespace std;
struct myS
{
    int a;
    int number;
};
bool v(myS t, myS r)
{
    if(t.a > r.a)
        return true;
    else
        return false;
}
int main()
{
    int m,n;
    cin >> m >> n;
    myS a[n+1];
    int i=-1;
    int u=0;
    bool q = false;
    for(i=0;i<n;i++)
    {
        cin >> a[i].a;
        a[i].number = i;
    }
    i=0;
    sort(a,a+n,v);
    while(u <= m && i < n)
    {

        u+=a[i].a;
        if(u == m){
            i++;
                break;
           }
        i++;
    }
    int y = i-1;
    if(u < m){
        cout << -1 << endl;
        exit(0);
    }
    cout << i << endl;
    for(i=0;i<=y;i++)
        cout << a[i].number+1<< " ";

}