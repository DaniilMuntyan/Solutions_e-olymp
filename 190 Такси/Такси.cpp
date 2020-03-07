#include <bits/stdc++.h>
using namespace std;
struct myS
{
    int value;
    int number;
};
bool inc(myS f, myS t)
{
    if(f.value < t.value)
        return true;
    else
        return false;
}
bool des(myS f, myS t)
{
    if(f.value > t.value)
        return true;
    else
        return false;
}
bool f(myS f, myS t)
{
    if(f.number > t.number)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    int d[n+1];
    int i,h;
    myS a[n+1];
    myS b[n+1];
    myS c[n+1];
    for(i=0;i<n;i++)
    {
        cin >> a[i].value;
        d[i] = a[i].value;
        a[i].number = i+1;
    }
    for(i=0;i<n;i++)
    {
        cin >> b[i].value;
        b[i].number = i+1;
    }
    sort(a,a+n,inc);
    sort(b,b+n,des);
    for(i=0;i<n;i++)
    {
        a[i].value = b[i].number;

    }
    sort(a,a+n,f);
    for(i=n-1;i>=0;i--)
        cout << a[i].value << " ";

}